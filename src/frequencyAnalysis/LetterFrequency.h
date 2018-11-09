#ifndef THECODEBOOKCIPHERCHALLENGES_LETTERFREQUENCY_H
#define THECODEBOOKCIPHERCHALLENGES_LETTERFREQUENCY_H


class LetterFrequency {
public:
    LetterFrequency(char character, int frequencyPercentage);


    char getCharacter();

    int getFrequencyPercentage();

private:
    char _character;
    int _frequencyPercentage;
};


#endif //THECODEBOOKCIPHERCHALLENGES_LETTERFREQUENCY_H
