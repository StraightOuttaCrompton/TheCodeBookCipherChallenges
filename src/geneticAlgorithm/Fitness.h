#ifndef THECODEBOOKCIPHERCHALLENGES_FITNESS_H
#define THECODEBOOKCIPHERCHALLENGES_FITNESS_H

using namespace std;

#include <string>

class Fitness {
public:
    // TODO: Should implement a class that uses this class as a base class
    Fitness();

    // Use base class with virtual method score
    double Score(string chromosome);
};


#endif //THECODEBOOKCIPHERCHALLENGES_FITNESS_H
