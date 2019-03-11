#ifndef THECODEBOOKCIPHERCHALLENGES_ALPHABETICCHROMOSOME_H
#define THECODEBOOKCIPHERCHALLENGES_ALPHABETICCHROMOSOME_H

#include <string>
#include "../geneticAlgorithm/IChromosome.h"
#include "../geneticAlgorithm/IChromosomeGenerator.h"

using namespace std;

class AlphabeticChromosomeGenerator : public IChromosomeGenerator<string> {
public:
    AlphabeticChromosomeGenerator(string alphabet) : _alphabet(alphabet) {};

    IChromosome<string> *generateChromosome() override;

    IChromosome<string> *breed(IChromosome<string> *so) override;

private:
    string _alphabet;
};

#endif //THECODEBOOKCIPHERCHALLENGES_ALPHABETICCHROMOSOME_H
