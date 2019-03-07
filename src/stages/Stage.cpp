#include "Stage.h"
#include "iostream"

void Stage::Execute() {
    cout << "No stage implemented for stageId: " + to_string(_stageId) << endl;
}
