cmake_minimum_required(VERSION 3.16)
project(SimTest VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(simtest
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(simtest PRIVATE Qt6::Widgets)
