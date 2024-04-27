cmake_minimum_required(VERSION 3.27)
project(PSD_A1_24)

set(CMAKE_CXX_STANDARD 17)

add_executable(PSD_A1_24 main.cpp
        Host.cpp
        Host.h
        Manager.cpp
        Manager.h
        Order.cpp
        Order.h
        Food.cpp
        Food.h
        Drink.cpp
        Drink.h
)
