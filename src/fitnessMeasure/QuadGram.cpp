#include "QuadGram.h"
#include <algorithm>
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;


// ********** MOVE TO STRING LIB FILE ********
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

vector<string> split(string s, char delimiter) {
    vector<string> output;

    int last = 0;
    int next = 0;

    string value;

    while ((next = s.find(delimiter, last)) != string::npos) {
        value = s.substr(last, next - last);
        output.push_back(value);
        last = next + 1;
    }

    value = s.substr(last);
    output.push_back(value);

    return output;
}
// ***********************************************


QuadGram::QuadGram(string quadGramFilePath, char delimiter) {
    _quadGramFilePath = quadGramFilePath;
    _delimiter = delimiter;

    indexFile();
}

void QuadGram::indexFile() {
    cout << "Indexing quadgram " + _quadGramFilePath + "..." << endl;

    FileReader fileReader(_quadGramFilePath);
    vector<string> lines = fileReader.getLines();

    for (vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it.base();

        vector<string> lineVec;
        lineVec = split(line, _delimiter);

        string gramLetters = toLowerCase(lineVec[0]);
        int value = stoi(lineVec[1]);

        _data.insert(pair<string, int>(gramLetters, value));
    }

    cout << "Indexing completed" << endl;
}

int QuadGram::getItem(string gramletters) {
    if (gramletters.size() != 4) {
        throw length_error("Expected gramLetters length to be 4");
    }

    return _data.at(toLowerCase(gramletters));
}
