#include "Fitness.h"
#include "iostream"

using namespace std;

#include "iostream";

Fitness::Fitness() {}

double Fitness::Score(string chromosome) {
    cout << "Fitness score not implemented yet" << endl;
    return ((double) rand() / (RAND_MAX));
}
