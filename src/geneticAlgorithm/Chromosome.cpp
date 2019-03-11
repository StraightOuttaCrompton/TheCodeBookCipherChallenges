#include <algorithm>
#include "Chromosome.h"

#include "iostream"

template<class T>
void Chromosome<T>::setSpace(T space) {
    _space = space;
    _value = space;
    random_shuffle(_value.begin(), _value.end());
}

//string Chromosome::getValue() {
//    return _value;
//}
//
//string Chromosome::getSpace() {
//    return _space;
//}


//template<class T>
//Chromosome<T> *Chromosome<T>::newChromosome() {
//    return new Chromosome(_space);
//}

//template<class T>
//Chromosome<T> *Chromosome<T>::reproduce(Chromosome<T> *so) {
//    if (_space != so->getSpace()) {
//        throw invalid_argument("Individuals must be from the same chromosome space to reproduce");
//    }

//    string mergedChromosome = merge(_value, so->getValue());
//    string mutatedChromosome = mutate(mergedChromosome);
//
//    return new Chromosome(_space, mutatedChromosome);

//    return *so;
//}


//string Chromosome::mutate(string input) {
//    cout << "Mutate not implemented" << endl;
//    return input;
//}
//
//string Chromosome::merge(string c1, string c2) {
//    cout << "merge not implemented" << endl;
//    return c1;
//}
