#include "FileLines.h"
#include <iostream>

using namespace std;

void FileLines::convert(void (*f)(string)) {
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        cout << *it << endl;
    }
}