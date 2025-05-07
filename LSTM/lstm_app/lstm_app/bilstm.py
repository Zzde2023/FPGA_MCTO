import numpy as np
import time
import ctypes as ctyp

# 加载 C++ 动态库 (确保 liblstm.so 已经编译并存在于适当的路径)
net = ctyp.CDLL('./liblstm2.so')  # 加载 RNN 软件动态库
dir(net)
voic_vec = (ctyp.c_float * (100 * 39))()
res_vec = (ctyp.c_float * 10)()
len_int = (ctyp.c_int)()
# import pynq
# from pynq import Overlay
# from pynq.lib import AxiStream, AxiLite

# 加载比特流文件
# overlay = Overlay('your_bitstream.bit')  # 加载你生成的 PYNQ 比特流文件

# 获取 AXI 连接
# biLSTM_top = overlay.BiLSTM_Top_0  # 根据你的 IP 核名称调整
# input_stream = biLSTM_top.input_stream
# output_stream = biLSTM_top.output_stream
# axi_lite = biLSTM_top.CTRL_BUS
def get_max_index(lst):
    idx = 0
    max_value = lst[0]
    for i in range(1, 10):
        if lst[i]>max_value:
            max_value = lst[i]
            idx = i
        else:
            max_value = max_value
    return idx
# 加载测试数据
test_features = np.load('test_features.npy')
valid_lens = np.load('valid_lens.npy')
test_labels = np.load('test_labels.npy')

# 设定序列长度
batch_size = 1  # 每次传输一个样本
total_samples = len(test_features)
print("total_samples:", total_samples)
sw_time = [0] * total_samples  # 记录每个音频推理的时间
sum = 0
sum_time = 0.0
for i in range(total_samples):
    t0 = time.time()
    input = test_features[i].flatten()
    voic_vec = (ctyp.c_float * 3900)(*input)
    len_int = (ctyp.c_int)(valid_lens[i])
    net.lstm_infer(voic_vec, len_int, res_vec)
    #print(get_max_index(res_vec))
    if get_max_index(res_vec) == test_labels[i]:
        sum += 1
    t1 = time.time()
    sw_time[i] = t1 - t0
print("Acur:", sum/total_samples, 'Average of infer time:{:1.6f}s'.format(np.average(sw_time)))

"""
# 推理函数
def infer_on_arm():
    for i in range(total_samples):
        # 读取当前音频数据
        current_sample = test_features[i]
        seq_len = valid_lens[i]

        # 设置序列长度并通过 AXI-Lite 接口传输
        axi_lite.write(0x00, seq_len)

        # 通过 AXI-Stream 发送音频特征数据
        for j in range(0, seq_len, MAX_SEQ_LEN):  # 按批次传输数据
            batch_data = current_sample[j:j + MAX_SEQ_LEN]

            for k in range(len(batch_data)):
                input_stream.write(batch_data[k])

            # 获取推理结果
            output_data = []
            for k in range(CLASS_NUM):
                output_data.append(output_stream.read())

            # 输出结果
            print(f'输出结果: {output_data}')

        # 使用 ARM 进行本地推理（如果需要进行对比）
        tensor_data = torch.tensor(current_sample[:seq_len], dtype=torch.float32)
        with torch.no_grad():
            prediction = model(tensor_data)
            predicted_class = torch.argmax(prediction, dim=1)
            print(f'ARM 推理输出：{predicted_class.item()}')

# 执行推理测试
# infer_on_arm()
"""