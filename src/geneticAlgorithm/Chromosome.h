#ifndef THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H
#define THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H

using namespace std;

#include <string>
#include "Fitness.h"
#include "IChromosome.h"

template<class T>
class Chromosome : public IChromosome<T> {
public:
    void setValue(T value);

    void setSpace(T space);


private:
    T _space;
    T _value;

//
//    // Virtual functions in base class?
//
//    // Virtual function in base class?
//    string merge(string c1, string c2);
//
//    // Virtual function in base class?
//    string mutate(string input);

};

#endif //THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H
