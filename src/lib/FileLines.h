#ifndef THECODEBOOKCIPHERCHALLENGES_FILELINES_H
#define THECODEBOOKCIPHERCHALLENGES_FILELINES_H

#include <string>
#include <vector>

using namespace std;

class FileLines {
    vector<string> lines;

public:
    FileLines(vector<string> _lines) :
            lines(_lines) {}

    void convert(void (*f)(string));
};


#endif //THECODEBOOKCIPHERCHALLENGES_FILELINES_H
