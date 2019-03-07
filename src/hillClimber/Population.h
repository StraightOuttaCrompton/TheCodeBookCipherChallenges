#ifndef THECODEBOOKCIPHERCHALLENGES_POPULATION_H
#define THECODEBOOKCIPHERCHALLENGES_POPULATION_H

#include <vector>
#include <queue>
#include "iostream"
#include "Individual.h"

using namespace std;

// create type for priority_queue<Chromosome, vector<Chromosome>, ChromosomeCompare>
// repeated way too much

class Population {
public:
    Population(int size, Individual *individual);

    void next();

    bool hasConverged();


private:
    int _size;

    int _numberOfParents = 4;

    Individual *_individual;

    priority_queue<Individual, vector<Individual>, IndividualCompare> _currentPopulation;

    void keepFittestParents();

    void generateChildren();

    void getInitialPopulation();

};

#endif //THECODEBOOKCIPHERCHALLENGES_POPULATION_H
