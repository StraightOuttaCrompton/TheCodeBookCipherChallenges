#ifndef THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
#define THECODEBOOKCIPHERCHALLENGES_FILEREADER_H

#include <string>
#include <vector>

using namespace std;

class FileReader {
public:
    FileReader(string fileName) :
            _fileName(fileName) {}

    vector<string> getLines();

private:
    void populateLines();

    string _fileName;
    vector<string> _lines;
};

#endif //THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
