#include <algorithm>
#include "Chromosome.h"

#include "iostream";
#include "../lib/StringUtils.h"

Chromosome::Chromosome(string space) {
    // chromspace toLower?
    StringUtils *stringUtils = new StringUtils();
    _space = stringUtils->toLowerCase(space);
    _value = getRandomChromosome(_space);
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

string Chromosome::getRandomChromosome(string space) {
    random_shuffle(space.begin(), space.end());
    return space;
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
