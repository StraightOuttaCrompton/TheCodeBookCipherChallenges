#include "Alphabet.h"
#include "../lib/StringUtils.h"

string Alphabet::getSimpleEnglishAlphabet() {
    if (_english_alphabet_simple.length() > 0) {
        return _english_alphabet_simple;
    }

    return getAlphabet("./alphabets/english_alphabet_simple.txt");
}

string Alphabet::getAlphabet(string filePath) {
    FileReader *fileReader = new FileReader(filePath);
    StringUtils *stringUtils = new StringUtils();

    return stringUtils->removeChar(fileReader->getAsString(), ' ');
}