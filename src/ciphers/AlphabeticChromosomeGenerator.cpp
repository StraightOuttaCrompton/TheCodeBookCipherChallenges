#include "AlphabeticChromosomeGenerator.h"
#include "../geneticAlgorithm/Chromosome.h"

IChromosome<string> *AlphabeticChromosomeGenerator::generateChromosome() {
    Chromosome<string> *chromosome;
    chromosome->setSpace(_alphabet);
}

string Chromosome::getRandomChromosome(string space) {
    random_shuffle(space.begin(), space.end());
    return space;
}