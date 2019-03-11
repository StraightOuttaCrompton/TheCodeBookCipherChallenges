//#include "Individual.h"
//#include <stdexcept>
//
//Individual::Individual(Chromosome *chromosome, Fitness *fitness) {
//    _chromosome = chromosome;
//    _fitness = fitness;
//    _fitnessScore = calculateFitnessScore();
//}
//
//Individual *Individual::CreateChild(Individual so) {
//    Chromosome *chromosome = getChromosome()->reproduce(so.getChromosome());
//    return new Individual(chromosome, _fitness);
//}
//
//Chromosome *Individual::getChromosome() {
//    return _chromosome;
//}
//
//double Individual::getFitnessScore() {
//    return _fitnessScore;
//}
//
//double Individual::calculateFitnessScore() {
//    return _fitness->Score(_chromosome->getValue());
//}
//
//Individual *Individual::NewIndividual() {
//    Chromosome *newChromosome = _chromosome->newChromosome();
//    return new Individual(newChromosome, _fitness);
//}