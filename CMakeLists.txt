cmake_minimum_required(VERSION 3.1)

project(fakemodex)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

link_directories(${CMAKE_BINARY_DIR}/lib)
add_definitions(-g -std=gnu99 -funwind-tables -O3 -fvisibility=hidden)

include_directories(include)

SET(SRC
    src/fmodwrapper.c
    src/fakemodex.c
    src/globalmem.c
    src/system.c
    src/reverb.c
    src/channel.c
    src/dsp.c
    src/recording.c
    src/geometry.c
    src/network.c
    src/userdata.c
    src/sound.c
    src/sync.c
    src/music.c
    src/channelgroup.c
    src/soundgroup.c
)

SET(INCS
    include/fakemodex.h
    include/fmodwrapper.h
    include/fmodpfn.h
    include/fmodex/fmod.h
    include/fmodfn.inc
)

add_library(fmodex SHARED ${SRC})
target_link_libraries(fmodex dl)
