#include "SubstitutionCipher.h"
#include "../lib/FileReader.h"
#include "iostream"
#include "../lib/StringUtils.h"

SubstitutionCipher::SubstitutionCipher(string alphabet, string cipherTextFilePath) {
    StringUtils *stringUtils = new StringUtils();

    FileReader *fileReader = new FileReader(cipherTextFilePath);

    _cipherText = stringUtils->toLowerCase(fileReader->getAsString());
    _alphabet = alphabet;
}

string SubstitutionCipher::Decipher(string key) {
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

map<char, char> SubstitutionCipher::createDecipherMap(string key) {
    int keySize = key.size();

    if (_alphabet.size() != keySize) {
        throw invalid_argument("Key must be the same size as alphabet");
    }

    map<char, char> decipherMap;

    for (int i = 0; i < keySize; ++i) {
        decipherMap[key[i]] = _alphabet[i];
    }

    return decipherMap;
}
