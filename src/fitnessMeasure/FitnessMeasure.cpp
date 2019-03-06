#include "FitnessMeasure.h"
#include <iostream>

using namespace std;

// ***** Move to StringUtils Class
#include <algorithm>

vector<string> getSubstringsOfLength(string str, int subStrLength) {
    vector<string> subStrings;

    for (int i = 0; i <= str.length() - subStrLength; ++i) {
        string subStr = str.substr(i, subStrLength);

        subStrings.push_back(subStr);
    }

    return subStrings;
}

string removeChar(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return str;
}

string removeSpaces(string str) {
    return removeChar(str, ' ');
}
// ************

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
    text = removeSpaces(text);

    return getSubstringsOfLength(text, 4);
}