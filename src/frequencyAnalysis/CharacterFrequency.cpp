#include "CharacterFrequency.h"

CharacterFrequency::CharacterFrequency(char character, int frequency) {
    _character = character;
    _frequency = frequency;
}

char CharacterFrequency::getCharacter() {
    return _character;
}

int CharacterFrequency::getFrequency() {
    return _frequency;
}