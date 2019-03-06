#include <iostream>

#include <string>
#include <vector>
#include "stage1/Stage1.h"
#include "fitnessMeasure/FitnessMeasure.h"

using namespace std;

//
//struct CharacterFrequencyComparator {
//    bool operator()(CharacterFrequency &left, CharacterFrequency &right) const {
//        return (left.getFrequency() < right.getFrequency());
//    }
//};
//
//
//void getAsciiCharacterFrequencies(string text, int (&frequencyArray)[256]) {
//}
//
//priority_queue<CharacterFrequency, vector<CharacterFrequency>, CharacterFrequencyComparator>
//orderCharacterFrequencies(int (&frequencyArray)[256]) {
//    priority_queue<CharacterFrequency, vector<CharacterFrequency>, CharacterFrequencyComparator> characterFrequencyQueue;
//
//    for (int j = 0; j < 256; ++j) {
//        if (frequencyArray[j] > 0) {
//            CharacterFrequency a(char(j), frequencyArray[j]);
//            characterFrequencyQueue.push(a);
//        }
//    }
//
//    return characterFrequencyQueue;
//}
//
//void printCharacterFrequencyQueue(
//        priority_queue<CharacterFrequency, vector<CharacterFrequency>, CharacterFrequencyComparator> characterFrequencyQueue
//) {
//    while (!characterFrequencyQueue.empty()) {
//        CharacterFrequency t = characterFrequencyQueue.top();
//        char c = t.getCharacter();
//        int f = t.getFrequency();
//        cout << c << ' ' << f << endl;
//        characterFrequencyQueue.pop();
//    }
//}
//
//void decipherAccordingToFrequencies(string cipherText,
//                                    priority_queue<CharacterFrequency, vector<CharacterFrequency>, CharacterFrequencyComparator> characterFrequencyQueue,
//                                    string language) {
//
//    string languageLetterFrequencies = getCharacterFrequenciesByLanguage(language);
//
//    map<char, char> deciphermentCharacterMap;
//
//    for (int i = 0; i < languageLetterFrequencies.length(); ++i) {
//        if (characterFrequencyQueue.empty()) {
//            break;
//        }
//
//
//        CharacterFrequency t = characterFrequencyQueue.top();
//        char c = t.getCharacter();
//        char f = t.getFrequency();
//        characterFrequencyQueue.pop();
//
//        if (f < 30) {
//            break;
//        }
//
//        deciphermentCharacterMap[c] = languageLetterFrequencies[i];
//    }
//
//    string decipheredText;
//
//    for (int j = 0; j < cipherText.length(); ++j) {
//        char c = cipherText[j];
//        if (c < 65 || c > 90) {
//            decipheredText += c;
//        } else {
//            decipheredText += deciphermentCharacterMap[c];
//        }
//    }
//
//    cout << cipherText << endl;
//    cout << decipheredText << endl;
//}
//
//
//void simpleFrequencyAnalysis(string text) {
//    int asciiCharacterFrequencies[256] = {};
//
//    getAsciiCharacterFrequencies(text, asciiCharacterFrequencies);
//
//    priority_queue<LetterFrequency, vector<LetterFrequency>, CharacterFrequencyComparator> characterFrequencyQueue = orderCharacterFrequencies(
//            asciiCharacterFrequencies);
//
////    printCharacterFrequencyQueue(characterFrequencyQueue);
//
//    decipherAccordingToFrequencies(text, characterFrequencyQueue, "english");
//}


int main() {
//    QuadGram quadGram("english_quadgrams.txt", ' ');
//    FitnessMeasure fitnessMeasure(quadGram);
    Populatio<string>(size)

    while (!hasConverged(p.fittest)) {
        p.next()
    }

    console.log("Best is " + p.fittest)

    return 0;
}