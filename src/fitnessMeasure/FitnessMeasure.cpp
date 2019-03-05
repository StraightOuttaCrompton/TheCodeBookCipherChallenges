#include "FitnessMeasure.h"
#include <fstream>
#include <iostream>

FitnessMeasure::FitnessMeasure(string ngramFilePath) {
    ifstream inputFileStream;

    inputFileStream.open(ngramFilePath);

    if (!inputFileStream.good()) {
        cout << "Failed to open ngram file" << endl;
    } else {
        while (!inputFileStream.eof()) {
            string line;
            getline(inputFileStream, line);
            cout << line << endl;
        }
    }
}
