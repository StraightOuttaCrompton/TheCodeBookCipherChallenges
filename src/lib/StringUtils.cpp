#include "StringUtils.h"

#include <algorithm>

StringUtils::StringUtils() {}

string StringUtils::toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

vector <string> StringUtils::split(string s, char delimiter) {
    vector <string> output;

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

vector <string> StringUtils::getSubstringsOfLength(string str, int subStrLength) {
    vector <string> subStrings;

    for (int i = 0; i <= str.length() - subStrLength; ++i) {
        string subStr = str.substr(i, subStrLength);

        subStrings.push_back(subStr);
    }

    return subStrings;
}

string StringUtils::removeChar(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return str;
}

string StringUtils::removeSpaces(string str) {
    return removeChar(str, ' ');
}
