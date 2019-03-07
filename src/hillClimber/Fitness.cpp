#include "Fitness.h"

using namespace std;

#include "iostream";

Fitness::Fitness() {}

double Fitness::Score(string chromosome) {
    cout << "Fitness test not implemented yet" << endl;

    return ((double) rand() / (RAND_MAX));
}
