#include "FileReader.h"
#include <iostream>
#include <fstream>

using namespace std;

string FileReader::getCipherText(const unsigned int stage) {
    ifstream myFile;
    string cipherText;

    myFile.open("cipherTexts/stage" + to_string(stage) + ".txt");

    if (!myFile.good()) {
        cout << "Failed to open cipherText file" << endl;
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

string FileReader::getLetterFrequenciesInOrder(const string language) {
    ifstream myFile;
    string characterFrequenciesInOrder;

    myFile.open("letterFrequencies/" + language + ".txt");

    if (!myFile.good()) {
        cout << "Failed to open letter frequency file" << endl;
    } else {
        while (!myFile.eof()) {
            char letter;
            float percentage;

            myFile >> letter >> percentage;
            characterFrequenciesInOrder += letter;
        }
    }

    myFile.close();

    return characterFrequenciesInOrder;
}