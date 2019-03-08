#ifndef THECODEBOOKCIPHERCHALLENGES_ALPHABET_H
#define THECODEBOOKCIPHERCHALLENGES_ALPHABET_H


#include <map>
#include "../lib/FileReader.h"
#include "Language.h"

class Alphabet {
public:
    string getAlphabetForLanguage(Language lang);

private:
    map<Language, string> _cachedLanguages;

    string getAlphabet(string filePath);
};


#endif //THECODEBOOKCIPHERCHALLENGES_ALPHABET_H
