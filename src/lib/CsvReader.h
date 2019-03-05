#ifndef THECODEBOOKCIPHERCHALLENGES_CSVREADER_H
#define THECODEBOOKCIPHERCHALLENGES_CSVREADER_H

#include <string>
#include <vector>

using namespace std;

class CSVReader {
    string fileName;
    string delimiter;

public:
    CSVReader(string _fileName, string _delimiter = ",") :
            fileName(_fileName), delimiter(_delimiter)
    {}

    vector<vector<string>> getData();
};

#endif //THECODEBOOKCIPHERCHALLENGES_CSVREADER_H
