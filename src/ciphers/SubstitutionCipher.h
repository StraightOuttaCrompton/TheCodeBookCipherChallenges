#ifndef THECODEBOOKCIPHERCHALLENGES_SUBSTITUTION_H
#define THECODEBOOKCIPHERCHALLENGES_SUBSTITUTION_H

using namespace std;

#include <string>
#include <map>

class SubstitutionCipher { // inherits from cipher class
public:
    SubstitutionCipher(string alphabet, string cipherTextFilePath);

    // virtual override. key of type chromosome T
    // key is relative to alphabet passed in constuctor
    string Decipher(string key);

private:
    map<char, char> createDecipherMap(string key);

    string _cipherText;
    string _alphabet;
    map<string, string> _decipheredTexts;

};


#endif //THECODEBOOKCIPHERCHALLENGES_SUBSTITUTION_H
