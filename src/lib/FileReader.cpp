#include "FileReader.h"
#include <fstream>

vector<string> FileReader::getLines() {
    if (!_lines.empty()) {
        return _lines;
    }

    populateLines();

    return _lines;
}

void FileReader::populateLines() {
    ifstream file(_fileName);

    vector<string> lines;

    string line = "";

    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    if (lines.empty()) {
        throw invalid_argument("No lines in file " + _fileName);
    }

    _lines = lines;
}