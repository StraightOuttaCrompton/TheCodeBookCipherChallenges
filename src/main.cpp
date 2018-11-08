#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;


string readCipherText(const unsigned int stage) {
    ifstream myFile;
    string cipherText;

    myFile.open("cipherTexts/" + to_string(stage) + ".txt");

    if (!myFile.good()) {
        cout << "Failed to open file" << endl;
    } else {
        while (!myFile.eof()) {
            string line;
            getline(myFile, line);
            cipherText += line + " ";
        }
    }

    myFile.close();

    return cipherText;
}

struct CharacterFrequencyMapComparator {
    bool operator()(const char &left, const char &right) const {
        return (left < right);
    }
};

void simpleFrequencyAnalysis(string text) {
    int frequency[256] = {};

    for (int i = 0; i < text.size(); ++i) {
        int c = int(text[i]);
        if (c > 255) {
            throw new invalid_argument("Not ASCII character");
        }

        ++frequency[c];
    }

    map<char, int, CharacterFrequencyMapComparator> characterFrequencyMap;
    for (int j = 0; j < 256; ++j) {
//        cout << frequency[j] << endl;

        if (frequency[j] > 0) {
//            characterFrequencyMap[char(j)] = frequency[j];
            characterFrequencyMap.insert(make_pair(char(j), frequency[j]));
        }
    }

    for (map<char, int>::iterator it = characterFrequencyMap.begin();
         it != characterFrequencyMap.end(); it++) {
        cout << it->first << " :: " << it->second << endl;
    }


}

int main() {
    string cipherText = readCipherText(1);

//    simpleFrequencyAnalysis("AAAABB");
    simpleFrequencyAnalysis(cipherText);
//    cout << cipherText << endl;

    return 0;
}