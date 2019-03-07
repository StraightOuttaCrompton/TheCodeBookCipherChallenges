#ifndef THECODEBOOKCIPHERCHALLENGES_STAGE_H
#define THECODEBOOKCIPHERCHALLENGES_STAGE_H

using namespace std;

class Stage {
public:
    Stage(int stageId) : _stageId(stageId) {};

    virtual void Execute();

protected:
    int _stageId;
};


#endif //THECODEBOOKCIPHERCHALLENGES_STAGE_H
