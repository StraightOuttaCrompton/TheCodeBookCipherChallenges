#ifndef THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
#define THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H

using namespace std;

#include <string>
#include <map>

class FitnessMeasure {

public:
    FitnessMeasure(string ngramFilePath);
    // add destruction method

    int score(string text);

private:
    map<string, int> _ngram;
};

#endif //THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
