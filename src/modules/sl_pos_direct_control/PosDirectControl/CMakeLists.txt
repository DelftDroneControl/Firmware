
    ### GENERATED BY generate_cmakelists.py ###

    # See libuavcan/CMakelists and matrix/Cmakelists for examples
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-error=float-equal -Wno-error=double-promotion -Wno-error=aggressive-loop-optimizations -Wno-error=array-bounds -Wno-error=shadow"
    )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-error=float-equal -Wno-error=double-promotion -Wno-error=aggressive-loop-optimizations -Wno-error=array-bounds -Wno-error=shadow"
    )
    add_definitions(
        -DMODEL=PosDirectControl
-DNUMST=2
-DNCSTATES=0
-DHAVESTDIO
-DRT
-DUSE_RTMODEL
-DUNIX
-DCLASSIC_INTERFACE=0
-DALLOCATIONFCN=0
-DTID01EQ=0
-DMAT_FILE=0
-DONESTEPFCN=1
-DTERMFCN=1
-DMULTI_INSTANCE_CODE=1
-DINTEGER_CODE=0
-DMT=0

    )

    # From: https://stackoverflow.com/questions/2110795/how-to-use-all-c-files-in-a-directory-with-the-cmake-build-system
    # Automatically add all source files.
    file(GLOB SRCS ./*.cpp ./*/*.cpp ./*/*/*.cpp ./*/*/*/*.cpp ./*.c ./*/*.c ./*/*/*.c ./*/*/*/*.c)
    px4_add_library(sl_PosDirectControl
        ${SRCS}
    )
    