#ifndef THECODEBOOKCIPHERCHALLENGES_POPULATION_H
#define THECODEBOOKCIPHERCHALLENGES_POPULATION_H

#include <vector>
#include <queue>
#include "Chromosome.h"
#include "iostream"

using namespace std;

class ChromosomeCompare {
public:
    bool operator()(Chromosome, Chromosome) {
        cout << "ChromosomeCompare not implemented" << endl;
        return true;
    }
};

class Population {
public:
    Population();

    Population(int size);

    void next();

    // chromosome
    Chromosome getFittest();


private:
    int _size;

    // map<fitness, chromosome>>
    priority_queue<Chromosome, vector<Chromosome>, ChromosomeCompare> _currentPopulation;

    void CullUnfit();

//    void Crossover();

    void Mutation();

    void getInitialPopulation();

};

#endif //THECODEBOOKCIPHERCHALLENGES_POPULATION_H
