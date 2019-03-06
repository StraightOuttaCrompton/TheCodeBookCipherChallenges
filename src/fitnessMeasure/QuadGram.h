#ifndef THECODEBOOKCIPHERCHALLENGES_QUADGRAM_H
#define THECODEBOOKCIPHERCHALLENGES_QUADGRAM_H

#include <map>
#include <string>

#include "../lib/StringUtils.h"

class QuadGram {
public:
    QuadGram(string _quadGramFilePath, char _delimiter);

    double getLogProbability(string gramletters);

private:
    map<string, int> _data;
    string _quadGramFilePath;
    char _delimiter;
    int _total;
    StringUtils _stringUtils;

    void indexFile();

    double calculateLogProbability(int count);
};

#endif //THECODEBOOKCIPHERCHALLENGES_QUADGRAM_H
