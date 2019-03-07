#include "Stage1.h"
#include "iostream"
#include "../alphabets/Alphabet.h"

void Stage1::Execute() {
    cout << "Execute Stage1" << endl;
    cout << "Simple Monoalphabetic Substitution Cipher" << endl;

    Alphabet *alphabet = new Alphabet();
    const string a = alphabet->getSimpleEnglishAlphabet();

    // new MonoalphabeticSubstitutionCipher(alphabet, cipherTextPath)
    // In here, create GA instance

    // CipherTextGA
    // Chromosome = key
    // Instance of Fitness base class

    // Get english fitness measure
    // Make Fitness base class which EnglishFitness will implement
}
