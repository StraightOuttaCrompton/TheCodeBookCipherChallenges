#ifndef THECODEBOOKCIPHERCHALLENGES_CHARACTERFREQUENCY_H
#define THECODEBOOKCIPHERCHALLENGES_CHARACTERFREQUENCY_H


class CharacterFrequency {
public:
    CharacterFrequency(char character, int frequency);


    char getCharacter();

    int getFrequency();

private:
    char _character;
    int _frequency;
};


#endif //THECODEBOOKCIPHERCHALLENGES_CHARACTERFREQUENCY_H
