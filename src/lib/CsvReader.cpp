#include "CsvReader.h"
#include <fstream>

using namespace std;

vector<string> split(string s, string delimiter) {
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

vector<vector<string>> CSVReader::getData() {
    ifstream file(fileName);

    vector<vector<string>> dataList;

    string line = "";

    while (getline(file, line)) {
        vector<string> vec;
        vec = split(line, delimiter);
        dataList.push_back(vec);
    }

    file.close();

    return dataList;
}