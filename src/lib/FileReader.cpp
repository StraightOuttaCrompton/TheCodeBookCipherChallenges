#include "FileReader.h"
#include <fstream>

vector<string> FileReader::getLines() {
    if (!_lines.empty()) {
        return _lines;
    }

    ifstream file(fileName);

    vector<string> lines;

    string line = "";

    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    _lines = lines;
    return lines;
}