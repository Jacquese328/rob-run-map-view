cmake_minimum_required(VERSION 3.16)
project(rob-run-map-view CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robrunmapview
    src/main.cpp
    src/mapper.cpp
    src/streamer.cpp
    src/overlay.cpp
)

target_include_directories(robrunmapview PRIVATE include)

if(WIN32)
    target_link_libraries(robrunmapview PRIVATE userenv)
endif()
