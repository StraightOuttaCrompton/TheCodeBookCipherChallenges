#include "QuadGram.h"
#include "../lib/FileReader.h"
#include <iostream>
#include <stdexcept>
#include <math.h>

using namespace std;

QuadGram::QuadGram(string quadGramFilePath, char delimiter) {
    _quadGramFilePath = quadGramFilePath;
    _delimiter = delimiter;

    indexFile();
}

void QuadGram::indexFile() {
    cout << "Indexing quadgram " + _quadGramFilePath + "..." << endl;

    _total = 0;

    FileReader fileReader(_quadGramFilePath);
    vector<string> lines = fileReader.getLines();

    for (vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it.base();

        vector<string> lineVec;
        lineVec = _stringUtils.split(line, _delimiter);

        string gramLetters = _stringUtils.toLowerCase(lineVec[0]);
        int value = stoi(lineVec[1]);

        _data.insert(pair<string, int>(gramLetters, value));
        _total++;
    }

    cout << "Indexing completed" << endl;
}

double QuadGram::calculateLogProbability(int count) {
    double p = (double) count / (double) _total;

    return log(p);
}

double QuadGram::getLogProbability(string gramletters) {
    if (gramletters.size() != 4) {
        throw length_error("Expected gramLetters length to be 4");
    }

    int count = _data.at(_stringUtils.toLowerCase(gramletters));

    return calculateLogProbability(count);
}
