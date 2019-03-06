#ifndef THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
#define THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H

#include <string>
#include <map>
#include "QuadGram.h"

class FitnessMeasure {

public:
    FitnessMeasure(QuadGram quadGram) : _quadGram(quadGram) {}

    int test(string text);

private:
//    vector<string> getQuadGrams(string text);

    QuadGram _quadGram;
};

#endif //THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
