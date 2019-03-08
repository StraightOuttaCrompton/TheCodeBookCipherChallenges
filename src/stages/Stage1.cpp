#include "Stage1.h"
#include "iostream"
#include "../alphabets/Alphabet.h"
#include "../ciphers/MonoAlphabeticSubstitutionCipher.h"

//template<class T>
//class IDemo {
//public:
//    virtual ~IDemo() {}
//
//    virtual void OverrideMe(T key) = 0;
//};
//
//template<class S>
//class Child : IDemo<S> {
//public:
//    virtual void OverrideMe(S key) {
//        //do stuff
//        cout << "OverrideMe" << endl;
//    }
//};

void Stage1::Execute() {
//    Child<string> child();
//    child().OverrideMe("test");


    cout << "Execute Stage1" << endl;
    cout << "Simple Monoalphabetic Substitution Cipher" << endl;

    Alphabet alphabet;
    const string a = alphabet.getSimpleEnglishAlphabet();

    MonoAlphabeticSubstitutionCipher monoAlphabeticSubstitutionCipher(a, "giuifg cei iprc tpnn du cei qprcni");

    string decipheredText = monoAlphabeticSubstitutionCipher.Decipher("phqgiumeaylnofdxjkrcvstzwb");
    cout << decipheredText << endl;







    // new MonoAlphabeticSubstitutionCipher(alphabet, cipherTextPath)
    // In here, create GA instance

    // CipherTextGA
    // Chromosome = key
    // Instance of Fitness base class

    // Get english fitness measure
    // Make Fitness base class which EnglishFitness will implement
}
