#ifndef THECODEBOOKCIPHERCHALLENGES_ICHROMOSOME_H
#define THECODEBOOKCIPHERCHALLENGES_ICHROMOSOME_H

using namespace std;

template<class T>
class IChromosome {
public:
    virtual  ~IChromosome();

    virtual void setSpace() = 0;

    virtual void setValue() = 0;
};

#endif //THECODEBOOKCIPHERCHALLENGES_ICHROMOSOME_H
