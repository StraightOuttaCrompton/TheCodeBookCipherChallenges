#ifndef THECODEBOOKCIPHERCHALLENGES_STRINGUTILS_H
#define THECODEBOOKCIPHERCHALLENGES_STRINGUTILS_H

using namespace std;

#include <string>
#include <vector>

class StringUtils {
public:
    StringUtils();

    string toLowerCase(string str);

    vector<string> split(string s, char delimiter);

    vector<string> getSubstringsOfLength(string str, int subStrLength);

    string removeChar(string str, char ch);

    string removeSpaces(string str);
};


#endif //THECODEBOOKCIPHERCHALLENGES_STRINGUTILS_H
