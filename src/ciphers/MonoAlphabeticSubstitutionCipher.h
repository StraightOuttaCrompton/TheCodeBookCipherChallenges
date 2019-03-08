#ifndef THECODEBOOKCIPHERCHALLENGES_MONOALPHABETICSUBSTITUTIONCIPHER_H
#define THECODEBOOKCIPHERCHALLENGES_MONOALPHABETICSUBSTITUTIONCIPHER_H

#include "Cipher.h"
#include <string>


class MonoAlphabeticSubstitutionCipher : public Cipher<string> {
public:
    MonoAlphabeticSubstitutionCipher(string alphabet) : _alphabet(alphabet) {}

    MonoAlphabeticSubstitutionCipher(string alphabet, string cipherText) : _alphabet(alphabet),
                                                                           _cipherText(cipherText) {}


    virtual string Decipher(string key);

private:
    string _alphabet;
    string _cipherText;
};

#endif //THECODEBOOKCIPHERCHALLENGES_MONOALPHABETICSUBSTITUTIONCIPHER_H
