#include "QuadGram.h"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

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

QuadGram::QuadGram(string _quadGramFilePath, char _delimiter) {
    delimiter = _delimiter;

    FileReader fileReader(_quadGramFilePath);
    vector<string> lines = fileReader.getLines();

    for (vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it.base();

        vector<string> lineVec;
        lineVec = split(line, delimiter);

        string gramLetters = lineVec[0];
        int value = stoi(lineVec[1]);

        data.insert(pair<string, int>(gramLetters, value));
    }
}

int QuadGram::getItem(string gramletters) {
    if (gramletters.size() != 4) {
        throw invalid_argument("Expected gramLetters length to be 4");
    }

    int value;
    try {
        value = data.at(gramletters);
    } catch (const out_of_range &e) {
        value = 1;
    }

    return value;
}
