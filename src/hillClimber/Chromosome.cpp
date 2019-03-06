#include "Chromosome.h"

#include "iostream";

Chromosome::Chromosome(string chromosomeSpace) {
    _chromosome = getRandomChromosome(chromosomeSpace);

    //    _fitness = claculateFitness(); use callback function?
}

string Chromosome::getRandomChromosome(string chromosomeSpace) {
    return "getRandomChromosome not implemented";
}

string Chromosome::getChromosome() {
    return _chromosome;
}

double claculateFitness() {
    cout << "calculate fitness not implemented yet" << endl;
    return 0;
}

double Chromosome::getFitness() {
    return 0;
}