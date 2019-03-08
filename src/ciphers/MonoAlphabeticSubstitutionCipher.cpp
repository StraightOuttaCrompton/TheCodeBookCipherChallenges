#include "MonoAlphabeticSubstitutionCipher.h"

#include "iostream"


string MonoAlphabeticSubstitutionCipher::Decipher(string key) {

    cout << "Blah" << endl;
    //    T possibleValues = this->getPossibleValues();
//    cout << possibleValues << endl;
//    if (_decipheredTexts.count(key) != 0) {
//        return _decipheredTexts[key];
//    }
//
//    map<char, char> decipherMap = createDecipherMap(key);
//    string decipheredText = "";
//
//    for (int i = 0; i < _cipherText.size(); ++i) {
//        char currentLetter = (char) _cipherText[i];
//
//        if (decipherMap.count(currentLetter) != 0) {
//            decipheredText += decipherMap[currentLetter];
//        } else {
//            decipheredText += currentLetter;
//        }
//    }
//
//    return decipheredText;

    return _cipherText;
}
//
//map<char, char> SubstitutionCipher::createDecipherMap(string key) {
//    int keySize = key.size();
//
//    if (_alphabet.size() != keySize) {
//        throw invalid_argument("Key must be the same size as alphabet");
//    }
//
//    map<char, char> decipherMap;
//
//    for (int i = 0; i < keySize; ++i) {
//        decipherMap[key[i]] = _alphabet[i];
//    }
//
//    return decipherMap;
//}



//
////SubstitutionCipher::SubstitutionCipher(string alphabet, string cipherTextFilePath) {
////    StringUtils *stringUtils = new StringUtils();
////
////    FileReader *fileReader = new FileReader(cipherTextFilePath);
////
////    _cipherText = stringUtils->toLowerCase(fileReader->getAsString());
////    _alphabet = alphabet;
////}
//
//

