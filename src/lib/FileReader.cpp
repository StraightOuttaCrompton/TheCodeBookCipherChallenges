#include "FileReader.h"
#include <fstream>

vector<string> FileReader::getLines() {
    ifstream file(fileName);

    vector<string> dataList;

    string line = "";

    while (getline(file, line)) {
        dataList.push_back(line);
    }

    file.close();

    return dataList;
}