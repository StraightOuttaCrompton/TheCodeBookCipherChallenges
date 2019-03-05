#ifndef THECODEBOOKCIPHERCHALLENGES_STAGE1_H
#define THECODEBOOKCIPHERCHALLENGES_STAGE1_H

#include <string>
#include "../frequencyAnalysis/FrequencyAnalysis.h"

using namespace std;

class Stage1 {

public:
    Stage1();

//    ~Stage1();

    string decipher();

private:
    string _cipherText;
    FrequencyAnalysis _frequencyAnalysis;
};


#endif //THECODEBOOKCIPHERCHALLENGES_STAGE1_H
