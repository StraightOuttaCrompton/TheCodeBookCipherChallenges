#ifndef THECODEBOOKCIPHERCHALLENGES_MONOALPHABETICSUBSTITUTIONCIPHER_H
#define THECODEBOOKCIPHERCHALLENGES_MONOALPHABETICSUBSTITUTIONCIPHER_H

#include "ICipher.h"
#include <string>
#include <map>


class MonoAlphabeticSubstitutionCipher : public ICipher<string> {
public:
    MonoAlphabeticSubstitutionCipher(string alphabet) : _alphabet(alphabet) {}

    MonoAlphabeticSubstitutionCipher(string alphabet, string cipherText) : _alphabet(alphabet),
                                                                           _cipherText(cipherText) {}

    virtual string Decipher(string key);

private:
    string _alphabet;
    string _cipherText;

    map <string, string> _decipheredTexts;

    map<char, char> createDecipherMap(string key);
};

#endif //THECODEBOOKCIPHERCHALLENGES_MONOALPHABETICSUBSTITUTIONCIPHER_H
