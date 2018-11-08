#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>

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

class CharacterFrequency {
public:
    CharacterFrequency(char _character, int _frequency);


    char getCharacter();

    int getFrequency();

private:
    char character;
    int frequency;
};

CharacterFrequency::CharacterFrequency(char _character, int _frequency) {
    character = _character;
    frequency = _frequency;
}

char CharacterFrequency::getCharacter() {
    return character;
}

int CharacterFrequency::getFrequency() {
    return frequency;
}

struct CharacterFrequencyComparator {
    bool operator()(CharacterFrequency &left, CharacterFrequency &right) const {
        return (left.getFrequency() < right.getFrequency());
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

    priority_queue<CharacterFrequency, vector<CharacterFrequency>, CharacterFrequencyComparator> characterFrequencyQueue;

    for (int j = 0; j < 256; ++j) {
        if (frequency[j] > 0) {
            CharacterFrequency a(char(j), frequency[j]);
            characterFrequencyQueue.push(a);
        }
    }

    while (!characterFrequencyQueue.empty()) {
        CharacterFrequency t = characterFrequencyQueue.top();
        char c = t.getCharacter();
        int f = t.getFrequency();
        cout << c << ' ' << f << endl;
        characterFrequencyQueue.pop();
    }
}

int main() {
    string stageOneCipherText = readCipherText(1);

    simpleFrequencyAnalysis(stageOneCipherText);

    return 0;
}