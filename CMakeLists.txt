cmake_minimum_required(VERSION 3.16)
project(rr-boost-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rrboosttool
    src/main.cpp
    src/tuner.cpp
    src/network.cpp
)

target_include_directories(rrboosttool PRIVATE include)

if(WIN32)
    target_link_libraries(rrboosttool PRIVATE userenv)
endif()
