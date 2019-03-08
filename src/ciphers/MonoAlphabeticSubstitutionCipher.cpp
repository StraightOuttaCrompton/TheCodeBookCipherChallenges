#include "MonoAlphabeticSubstitutionCipher.h"
#include "iostream"

string MonoAlphabeticSubstitutionCipher::Decipher(string key) {
    if (_decipheredTexts.count(key) != 0) {
        return _decipheredTexts[key];
    }

    map<char, char> decipherMap = createDecipherMap(key);
    string decipheredText = "";

    for (int i = 0; i < _cipherText.size(); ++i) {
        char currentLetter = (char) _cipherText[i];

        if (decipherMap.count(currentLetter) != 0) {
            decipheredText += decipherMap[currentLetter];
        } else {
            decipheredText += currentLetter;
        }
    }

    return decipheredText;
}

map<char, char> MonoAlphabeticSubstitutionCipher::createDecipherMap(string key) {
    unsigned long keySize = key.size();
    unsigned long alphabetSize = _alphabet.size();

    if (alphabetSize != keySize) {
        throw invalid_argument(
                "Key must be the same size as alphabet. "
                "Key size: " + to_string(keySize) + ". Alphabet size: " + to_string(alphabetSize) + "."
        );
    }

    map<char, char> decipherMap;

    for (int i = 0; i < keySize; ++i) {
        decipherMap[key[i]] = _alphabet[i];
    }

    return decipherMap;
}
