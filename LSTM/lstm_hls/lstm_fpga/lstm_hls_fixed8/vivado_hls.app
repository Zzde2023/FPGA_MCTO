<project xmlns="com.autoesl.autopilot.project" name="lstm_hls_fixed8" top="LSTM_Top">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../src/main.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="lstm_hls_fixed8/src/rnn.cpp" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="lstm_hls_fixed8/src/rnn.h" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="lstm_hls_fixed8/src/rnn_top.cpp" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="lstm_hls_fixed8/src/utils.h" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="lstm_hls_fixed8/src/weight.h" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="lstm_hls_fixed8/src/weight_sparse.h" sc="0" tb="false" cflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

