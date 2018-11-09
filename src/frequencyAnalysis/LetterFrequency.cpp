#include "LetterFrequency.h"

LetterFrequency::LetterFrequency(char character, int frequencyPercentage) {
    _character = character;
    _frequencyPercentage = frequencyPercentage;
}

char LetterFrequency::getCharacter() {
    return _character;
}

int LetterFrequency::getFrequencyPercentage() {
    return _frequencyPercentage;
}