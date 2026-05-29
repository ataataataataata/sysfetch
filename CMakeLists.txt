cmake_minimum_required(VERSION 4.2)
project(sysfetch)

set(CMAKE_CXX_STANDARD 20)

add_executable(sysfetch main.cpp
        Cpu.cpp
        Cpu.h
        Uptime.cpp
        Uptime.h
        Ram.cpp
        Ram.h
        System.cpp
        System.h
        Gpu.cpp
        Gpu.h
        Menu.cpp
        Menu.h
        Logo.h
        Colors.h
)


target_link_libraries(sysfetch dxgi)