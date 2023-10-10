cmake_minimum_required(VERSION 3.26)
project(Assignment02)

set(CMAKE_CXX_STANDARD 14)

include_directories(Employee_Classes)

add_executable(Assignment02
        Employee_Classes/Employee.cpp
        Employee_Classes/Employee.h
        Employee_Classes/main.cpp
        Employee_Classes/Nonprofessional.cpp
        Employee_Classes/Nonprofessional.h
        Employee_Classes/Professional.cpp
        Employee_Classes/Professional.h)
