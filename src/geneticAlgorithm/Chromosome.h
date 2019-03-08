#ifndef THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H
#define THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H

using namespace std;

#include <string>
#include "Fitness.h"

// in our case T will be string
class Chromosome {
public:
    Chromosome(string space);

    Chromosome(string space, string value);

    Chromosome *newChromosome();


    string getValue();

    string getSpace();

    // Virtual function in base class?
    Chromosome *reproduce(Chromosome *so);


private:
    string _space;
    string _value;

    // Virtual functions in base class?
    string getRandomChromosome(string chromosomeSpace);

    // Virtual function in base class?
    string merge(string c1, string c2);

    // Virtual function in base class?
    string mutate(string input);

};

#endif //THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H
