#ifndef THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
#define THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H

#include <string>
#include <map>
#include "QuadGram.h"
#include "../lib/StringUtils.h"

class FitnessMeasure {

public:
    FitnessMeasure(QuadGram quadGram) : _quadGram(quadGram) {}

    double test(string text);

private:
    vector<string> getQuadGrams(string text);

    double getScore(vector<string> quadGrams);

    QuadGram _quadGram;
    StringUtils _stringUtils;
};

#endif //THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
