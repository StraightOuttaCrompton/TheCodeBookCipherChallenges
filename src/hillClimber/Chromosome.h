#ifndef THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H
#define THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H

using namespace std;

#include <string>

// in our case T will be string
class Chromosome {
public:
    Chromosome(string chromosomeSpace);

    string getChromosome();

//    virtual? I want the implementation somewhere else
    double getFitness();

    void mutate();

private:
    string _chromosome;
    double _fitness;

    string getRandomChromosome(string chromosomeSpace);
};


#endif //THECODEBOOKCIPHERCHALLENGES_CHROMOSOME_H
