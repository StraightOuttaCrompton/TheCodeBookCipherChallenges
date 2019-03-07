#ifndef THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
#define THECODEBOOKCIPHERCHALLENGES_FILEREADER_H

#include <string>
#include <vector>

using namespace std;

class FileReader {
public:
    FileReader(string fileName);

    vector<string> getLines();

    string getAsString();

private:
    void readFile();

    void clearData();

    void storeLine(string line);

    string _fileName;
    vector<string> _lines;
    string _asString;
};

#endif //THECODEBOOKCIPHERCHALLENGES_FILEREADER_H
