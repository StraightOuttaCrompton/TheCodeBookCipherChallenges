#include "Population.h"

// ******* Multimap Utils *********
priority_queue<Chromosome, vector<Chromosome>, ChromosomeCompare>
getFirstNItems(int N, priority_queue<Chromosome, vector<Chromosome>, ChromosomeCompare> pq) {
    if (pq.size() <= N) {
        return pq;
    }

    priority_queue<Chromosome, vector<Chromosome>, ChromosomeCompare> output;

    for (int i = 0; i < N; ++i) {
        Chromosome top = pq.top();
        pq.pop();
        output.push(top);
    }

    return output;
}
// **********************************************


Population::Population() {
    _size = 10;

    getInitialPopulation();
}

Population::Population(int size) {
    _size = size;

    getInitialPopulation();
}

void Population::next() {
    selectFittestParents();
    generateChildren();
}

void Population::selectFittestParents() {
    _currentPopulation = getFirstNItems(_numberOfParents, _currentPopulation);
}

void Population::generateChildren() {
    // generate 4 children from 4 parents. 2 children for each pair of parents
    // mutatechildren randomly
    // fitness should be assigned to chromosome already
}

Chromosome Population::getFittest() {

}

void Population::getInitialPopulation() {
    cout << "getInitialPopulation not implemented" << endl;


    priority_queue<Chromosome, vector<Chromosome>, ChromosomeCompare> population;

    for (int i = 0; i < _size; ++i) {
        Chromosome chromosome("abcdefghijklmnopqrstuvwxyz");

        population.push(chromosome);
    }

    _currentPopulation = population;
}


