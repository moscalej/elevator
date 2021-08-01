cmake_minimum_required(VERSION 3.15)
project(Elevator)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled4 main.cpp Arduino.cpp Arduino.h ElevatorClass.cpp ElevatorClass.h StateMachine.cpp StateMachine.h GlobalState.cpp GlobalState.h)
