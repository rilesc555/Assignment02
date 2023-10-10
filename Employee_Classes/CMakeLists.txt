cmake_minimum_required(VERSION 3.26)
project(Employee_Classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Employee_Classes main.cpp
        Employee.h
        Professional.cpp
        Professional.h
        Nonprofessional.cpp
        Nonprofessional.h
        Employee.cpp
)
