#ifndef THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
#define THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H

#include <string>
#include <map>
#include "QuadGram.h"

class FitnessMeasure {

public:
    FitnessMeasure(QuadGram _quadGram) : quadGram(_quadGram) {}

    int test(string text);

private:
    QuadGram quadGram;
};

#endif //THECODEBOOKCIPHERCHALLENGES_FITNESSMEASURE_H
