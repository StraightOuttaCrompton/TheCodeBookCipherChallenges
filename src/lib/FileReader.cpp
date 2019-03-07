#include "FileReader.h"
#include <fstream>

FileReader::FileReader(string fileName) {
    _fileName = fileName;
    readFile();
}

string FileReader::getAsString() {
    if (_asString.size() > 0) {
        return _asString;
    }

    readFile();

    return _asString;
}

vector<string> FileReader::getLines() {
    if (!_lines.empty()) {
        return _lines;
    }

    readFile();

    return _lines;
}

void FileReader::readFile() {
    ifstream file(_fileName);

    clearData();

    string line = "";
    while (getline(file, line)) {
        storeLine(line);
    }

    file.close();

    if (_lines.empty()) {
        throw invalid_argument("No lines in file " + _fileName);
    }
}

void FileReader::clearData() {
    _lines.clear();
    _asString = "";
}

void FileReader::storeLine(string line) {
    _lines.push_back(line);
    _asString += " " + line;
}