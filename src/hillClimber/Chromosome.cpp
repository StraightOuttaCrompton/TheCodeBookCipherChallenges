#include <algorithm>
#include "Chromosome.h"

#include "iostream";

Chromosome::Chromosome(string space) {
    _space = space;
    _value = getRandomChromosome(space);
}

Chromosome::Chromosome(string space, string value) {
    _space = space;
    _value = value;
}

string Chromosome::getValue() {
    return _value;
}

string Chromosome::getSpace() {
    return _space;
}

string Chromosome::getRandomChromosome(string chromosomeSpace) {
    random_shuffle(chromosomeSpace.begin(), chromosomeSpace.end());
    return chromosomeSpace;
}


Chromosome *Chromosome::newChromosome() {
    return new Chromosome(_space);
}

Chromosome *Chromosome::reproduce(Chromosome *so) {
    if (_space != so->getSpace()) {
        throw invalid_argument("Individuals must be from the same chromosome space to reproduce");
    }

    string mergedChromosome = merge(_value, so->getValue());
    string mutatedChromosome = mutate(mergedChromosome);

    return new Chromosome(_space, mutatedChromosome);
}


string Chromosome::mutate(string input) {
    cout << "Mutate not implemented" << endl;
    return input;
}

string Chromosome::merge(string c1, string c2) {
    cout << "merge not implemented" << endl;
    return c1;
}
