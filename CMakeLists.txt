cmake_minimum_required(VERSION 3.12)
project(TheCodeBookCipherChallenges)

set(CMAKE_CXX_STANDARD 17)

add_executable(TheCodeBookCipherChallenges src/main.cpp src/frequencyAnalysis/LetterFrequency.cpp src/frequencyAnalysis/LetterFrequency.h src/frequencyAnalysis/FrequencyAnalysis.cpp src/frequencyAnalysis/FrequencyAnalysis.h src/stage1/Stage1.cpp src/stage1/Stage1.h src/fitnessMeasure/FitnessMeasure.cpp src/fitnessMeasure/FitnessMeasure.h src/lib/CsvReader.cpp src/lib/CsvReader.h src/lib/FileReader.cpp src/lib/FileReader.h src/fitnessMeasure/QuadGram.cpp src/fitnessMeasure/QuadGram.h)