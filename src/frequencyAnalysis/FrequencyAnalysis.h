#ifndef THECODEBOOKCIPHERCHALLENGES_FREQUENCYANALYSIS_H
#define THECODEBOOKCIPHERCHALLENGES_FREQUENCYANALYSIS_H

#include <string>

using namespace std;

class FrequencyAnalysis {
    // Add options for making case matter, including special characters, including spaces
public:
    FrequencyAnalysis();

    FrequencyAnalysis(string cipherText);

//    ~FrequencyAnalysis();

    void printAsciiFrequencies();

    void printCipherText();

private:
    string _cipherText;
    unsigned int _asciiFrequencyArray[256];

    void assignAsciiFrequencyArray();
};

#endif //THECODEBOOKCIPHERCHALLENGES_FREQUENCYANALYSIS_H
