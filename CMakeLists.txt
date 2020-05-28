cmake_minimum_required(VERSION 3.15)
project(OP_LR4)

set(CMAKE_CXX_STANDARD 14)

add_executable(OP_LR4 main.cpp WAVFILE.cpp WAVFILE.h WavParser.cpp WavParser.h HEADER.h UserInterface.cpp UserInterface.h)