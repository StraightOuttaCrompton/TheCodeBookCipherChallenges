#ifndef THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
#define THECODEBOOKCIPHERCHALLENGES_FILEREADER_H

#include <string>

using namespace std;

class FileReader {
public:
//    FileReader();

//    ~FileReader();

    string getCipherText(const unsigned int stage);

    string getLetterFrequenciesInOrder(const string language);

};


#endif //THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
