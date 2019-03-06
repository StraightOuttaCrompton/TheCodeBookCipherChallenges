#include "FitnessMeasure.h"
#include <iostream>
#include "../lib/StringUtils.h"

using namespace std;

double FitnessMeasure::test(string text) {
    vector<string> quadGrams = getQuadGrams(text);

    return getScore(quadGrams);
}

double FitnessMeasure::getScore(vector<string> quadGrams) {
    double score;

    for (vector<string>::iterator it = quadGrams.begin(); it != quadGrams.end(); ++it) {
        string quadGram = *it.base();

        score = score + _quadGram.getLogProbability(quadGram);
    }

    return score;
}

vector<string> FitnessMeasure::getQuadGrams(string text) {
    text = _stringUtils.removeSpaces(text);

    return _stringUtils.getSubstringsOfLength(text, 4);
}