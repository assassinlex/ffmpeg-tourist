cmake_minimum_required(VERSION 3.19)
project(ffmpeg-demo)

set(CMAKE_CXX_STANDARD 14)

include_directories(./include/)
link_directories(./lib/)

add_executable(ffmpeg-demo main.cpp)

target_link_libraries(
        ffmpeg-demo
        avcodec
        avdevice
        avfilter
        avformat
        avresample
        avutil
        postproc
        swresample
        swscale
)