cmake_minimum_required(VERSION 3.12)
project(TheCodeBookCipherChallenges)

set(CMAKE_CXX_STANDARD 17)

add_executable(TheCodeBookCipherChallenges src/main.cpp src/frequencyAnalysis/LetterFrequency.cpp src/frequencyAnalysis/LetterFrequency.h src/frequencyAnalysis/FrequencyAnalysis.cpp src/frequencyAnalysis/FrequencyAnalysis.h src/FileReader.cpp src/FileReader.h src/stage1/Stage1.cpp src/stage1/Stage1.h)