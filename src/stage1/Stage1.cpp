#include "Stage1.h"
#include "../FileReader.h"

Stage1::Stage1() {
    FileReader _fileReader;
    _cipherText = _fileReader.getCipherText(1);
    _frequencyAnalysis = FrequencyAnalysis(_cipherText);
}

string Stage1::decipher() {
    _frequencyAnalysis.printAsciiFrequencies();
    _frequencyAnalysis.printCipherText();
    return "Not yet implemented";
}
