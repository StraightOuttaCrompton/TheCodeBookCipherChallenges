#include "Stage1.h"
#include "iostream"
#include "../alphabets/Alphabet.h"
#include "../ciphers/MonoAlphabeticSubstitutionCipher.h"

template<class T>
class IDemo {
public:
    virtual ~IDemo() {}

    virtual void OverrideMe(T key) = 0;
};

template<class S>
class Child : IDemo<S> {
public:
    virtual void OverrideMe(S key) {
        //do stuff
        cout << "OverrideMe" << endl;
    }
};

void Stage1::Execute() {
    cout << "Execute Stage1" << endl;
    cout << "Simple Monoalphabetic Substitution Cipher" << endl;
//
//    Alphabet *alphabet = new Alphabet();
//    const string a = alphabet->getSimpleEnglishAlphabet();

//    Child<string> child();
//    child().OverrideMe("test");

//    Child *child = new Child();
//    child->OverrideMe();


    MonoAlphabeticSubstitutionCipher monoAlphabeticSubstitutionCipher("alphabet");
    monoAlphabeticSubstitutionCipher.Decipher("hello");

    //    MonoAlphabeticSubstitutionCipher<string> *monoAlphabeticSubstitutionCipher = new MonoAlphabeticSubstitutionCipher<string>("possible", "ciphertext");








    // new MonoAlphabeticSubstitutionCipher(alphabet, cipherTextPath)
    // In here, create GA instance

    // CipherTextGA
    // Chromosome = key
    // Instance of Fitness base class

    // Get english fitness measure
    // Make Fitness base class which EnglishFitness will implement
}
