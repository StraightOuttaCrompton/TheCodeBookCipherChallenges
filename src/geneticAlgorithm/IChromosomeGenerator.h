#ifndef THECODEBOOKCIPHERCHALLENGES_ICHROMOSOMEGENERATOR_H
#define THECODEBOOKCIPHERCHALLENGES_ICHROMOSOMEGENERATOR_H

#include "IChromosome.h"

template<class T>
class IChromosomeGenerator {
public:
    virtual  ~IChromosomeGenerator();

    virtual IChromosome<T> *generateChromosome() = 0;

    virtual IChromosome<T> *breed(IChromosome<T> *so) = 0;
};

#endif //THECODEBOOKCIPHERCHALLENGES_ICHROMOSOMEGENERATOR_H
