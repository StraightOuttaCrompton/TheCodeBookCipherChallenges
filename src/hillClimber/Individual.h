#ifndef THECODEBOOKCIPHERCHALLENGES_INDIVIDUAL_H
#define THECODEBOOKCIPHERCHALLENGES_INDIVIDUAL_H


#include "Chromosome.h"

class Individual {
public:
    Individual(Chromosome *chromosome, Fitness *fitness);

    Individual *NewIndividual();

    Individual *CreateChild(Individual so);

    double getFitnessScore();

    Chromosome *getChromosome();


private:
    Chromosome *_chromosome;
    Fitness *_fitness;
    double _fitnessScore;

    double calculateFitnessScore();
};

class IndividualCompare {
public:
    bool operator()(Individual i1, Individual i2) {
        return i1.getFitnessScore() < i2.getFitnessScore();
    }
};


#endif //THECODEBOOKCIPHERCHALLENGES_INDIVIDUAL_H
