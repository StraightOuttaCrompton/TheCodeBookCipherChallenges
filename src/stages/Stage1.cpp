#include "Stage1.h"
#include "iostream"
#include "../alphabets/Alphabet.h"
#include "../ciphers/MonoAlphabeticSubstitutionCipher.h"
#include "../geneticAlgorithm/Chromosome.h"
#include "../alphabets/Language.h"

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
//    string test = "test";

    cout << "Execute Stage1" << endl;
    cout << "Simple Monoalphabetic Substitution Cipher" << endl;

    Language lang = ENGLISH;

    Alphabet alphabet;
    const string englishAlphabet = alphabet.getAlphabetForLanguage(lang);

//    MonoAlphabeticSubstitutionCipher monoAlphabeticSubstitutionCipher(englishAlphabet,
//                                                                      "giuifg cei iprc tpnn du cei qprcni");
//
//    string decipheredText = monoAlphabeticSubstitutionCipher.Decipher("phqgiumeaylnofdxjkrcvstzwb");
//    cout << decipheredText << endl;


//    string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";


//    QuadGram quadGram("english_quadgrams.txt", ' ');
//    FitnessMeasure *fitnessMeasure = new FitnessMeasure(quadGram);

//    Fitness *fitness = new Fitness();
//
//    Chromosome *chromosome = new Chromosome(englishAlphabet);
//
//    Individual *individual = new Individual(chromosome, fitness);
//
//    Population p(10, individual);
//
//    p.Next();
//
//    p.PrintPopulation();
//
//    cout << "--------------" << endl;
//
//    p.Next();
//    p.PrintPopulation();

//    while (!p.HasConverged()) {
//        p.Next();
//    }




//    SubstitutionCipher *substitutionCipher = new SubstitutionCipher(alphabet, "./cipherTexts/test.txt");
//    string text = substitutionCipher->Decipher("phqgiumeaylnofdxjkrcvstzwb");
//
//    cout << text << endl;





    // new MonoAlphabeticSubstitutionCipher(alphabet, cipherTextPath)
    // In here, create GA instance

    // CipherTextGA
    // Chromosome = key
    // Instance of Fitness base class

    // Get english fitness measure
    // Make Fitness base class which EnglishFitness will implement
}
