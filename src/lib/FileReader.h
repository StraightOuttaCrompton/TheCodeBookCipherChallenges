#ifndef THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
#define THECODEBOOKCIPHERCHALLENGES_FILEREADER_H

#include <string>
#include <vector>

using namespace std;

class FileReader {
    string fileName;

public:
    FileReader(string _fileName) :
            fileName(_fileName) {}

    vector<string> getLines();
};

#endif //THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
