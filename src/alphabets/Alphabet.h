#ifndef THECODEBOOKCIPHERCHALLENGES_ALPHABET_H
#define THECODEBOOKCIPHERCHALLENGES_ALPHABET_H


#include "../lib/FileReader.h"

class Alphabet {
public:
    string getSimpleEnglishAlphabet();

private:
    string getAlphabet(string filePath);

    string _english_alphabet_simple;
};


#endif //THECODEBOOKCIPHERCHALLENGES_ALPHABET_H
