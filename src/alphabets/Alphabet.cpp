#include "Alphabet.h"
#include "../lib/StringUtils.h"
#include "../Exceptions.h"

string Alphabet::getAlphabetForLanguage(Language lang) {
    if (_cachedLanguages.count(lang) != 0) {
        return _cachedLanguages[lang];
    }

    if (lang == ENGLISH) {
        return getAlphabet("./alphabets/english_alphabet_simple.txt");
    }

    throw NotImplemented();
//    throw logic_error("Language Not implemented");
}

string Alphabet::getAlphabet(string filePath) {
    FileReader *fileReader = new FileReader(filePath);
    StringUtils *stringUtils = new StringUtils();

    return stringUtils->removeChar(fileReader->getAsString(), ' ');
}