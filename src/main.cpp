#include <iostream>
#include <string>
#include "stages/Stage1.h"

using namespace std;

int main() {
    Stage1 *currentStage = new Stage1();

    currentStage->Execute();

    return 0;
}