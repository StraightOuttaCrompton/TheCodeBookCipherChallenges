#ifndef THECODEBOOKCIPHERCHALLENGES_QUADGRAM_H
#define THECODEBOOKCIPHERCHALLENGES_QUADGRAM_H

#include <map>
#include "../lib/FileReader.h"

class QuadGram {
public:
    QuadGram(string _quadGramFilePath, char _delimiter);

    int getItem(string gramletters);

private:
    map<string, int> data;
    char delimiter;
    FileReader *fileReader;
};

#endif //THECODEBOOKCIPHERCHALLENGES_QUADGRAM_H
