#include "FrequencyAnalysis.h"
#include <iostream>

using namespace std;

FrequencyAnalysis::FrequencyAnalysis() {
    _cipherText = "";
    assignAsciiFrequencyArray();
}

FrequencyAnalysis::FrequencyAnalysis(string cipherText) {
    _cipherText = cipherText;
    assignAsciiFrequencyArray();
}


void FrequencyAnalysis::assignAsciiFrequencyArray() {
    for (int i = 0; i < 256; ++i) {
        _asciiFrequencyArray[i] = 0;
    };

    for (int i = 0; i < _cipherText.size(); ++i) {
        int c = int(_cipherText[i]);
        if (c > 255) {
            throw new invalid_argument("Not ASCII character");
        }

        if (c < 65 || c > 90) {
            continue;
        }

        ++_asciiFrequencyArray[c];
    }
}

void FrequencyAnalysis::printAsciiFrequencies() {
    for (int i = 0; i < 256; ++i) {
        cout << _asciiFrequencyArray[i] << endl;
    }
}

void FrequencyAnalysis::printCipherText() {
    cout << _cipherText << endl;
}