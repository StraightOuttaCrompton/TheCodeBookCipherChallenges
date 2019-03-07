#include "Population.h"
#include "Individual.h"

// ******* priority_queue Utils *********
priority_queue<Individual, vector<Individual>, IndividualCompare>
getFirstNItems(int N, priority_queue<Individual, vector<Individual>, IndividualCompare> pq) {
    if (pq.size() <= N) {
        return pq;
    }

    priority_queue<Individual, vector<Individual>, IndividualCompare> output;

    for (int i = 0; i < N; ++i) {
        Individual top = pq.top();
        pq.pop();
        output.push(top);
    }

    return output;
}
// **********************************************


Population::Population(int size, Individual *individual) {
    _size = size;
    _individual = individual;

    getInitialPopulation();
}

void Population::next() {
    keepFittestParents();
    generateChildren();
}

void Population::keepFittestParents() {
    _currentPopulation = getFirstNItems(_numberOfParents, _currentPopulation);
}

void Population::generateChildren() {
    // generate 4 children from 4 parents. 2 children for each pair of parents
    // fitness should be assigned to chromosome already

    priority_queue<Individual, vector<Individual>, IndividualCompare> parents = _currentPopulation;

    while (parents.size() > 1) {
        Individual p1 = parents.top();
        parents.pop();
        Individual p2 = parents.top();
        parents.pop();

        Individual *c1 = p1.CreateChild(p2);
        Individual *c2 = p2.CreateChild(p1);

        _currentPopulation.push(*c1);
        _currentPopulation.push(*c2);
    }
}


bool Population::hasConverged() {
    return false;
}

void Population::getInitialPopulation() {
    priority_queue<Individual, vector<Individual>, IndividualCompare> population;

    for (int i = 0; i < _size; ++i) {
        Individual c = *_individual->NewIndividual();
        population.push(c);
    }

    _currentPopulation = population;
}



