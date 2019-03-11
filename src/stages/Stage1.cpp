#include "Stage1.h"
#include "iostream"
#include "../alphabets/Alphabet.h"
#include "../ciphers/MonoAlphabeticSubstitutionCipher.h"
#include "../geneticAlgorithm/Chromosome.h"
#include "../alphabets/Language.h"
#include "../ciphers/AlphabeticChromosomeGenerator.h"

//template<class T>
//class IChro {
//public:
//    virtual ~IChro() = default;
//
//    virtual T GetHello() = 0;
//
//    virtual void OverrideMe(T key) = 0;
//
//};
//
//template<class T>
//class Chro : IChro<T> {
//public:
//    Chro(T _hello) : _hello(_hello) {}
//
//    T GetHello() override {
//        cout << "Chro GetHello" << endl;
//        return _hello;
//    }
//
//private:
//    T _hello;
//};
//
//class AlphabetChro : Chro<string> {
//public:
//    AlphabetChro() : Chro("hello") {}
//
//    void OverrideMe() {
//        cout << "Override me" << endl;
//        string hello;
//        hello = GetHello();
//        cout << hello << endl;
//    }
//};

void Stage1::Execute() {
//    AlphabetChro *alphabetChro;
//    alphabetChro->OverrideMe();



    cout << "Execute Stage1" << endl;
    cout << "Simple Monoalphabetic Substitution Cipher" << endl;

    Alphabet alphabet;
    const string englishAlphabet = alphabet.getAlphabetForLanguage(ENGLISH);

//    MonoAlphabeticSubstitutionCipher monoAlphabeticSubstitutionCipher(englishAlphabet,
//                                                                      "giuifg cei iprc tpnn du cei qprcni");
//
//    string decipheredText = monoAlphabeticSubstitutionCipher.Decipher("phqgiumeaylnofdxjkrcvstzwb");
//    cout << decipheredText << endl;


//    string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";


//    QuadGram quadGram("english_quadgrams.txt", ' '); // pass language to quadgram?
//    FitnessMeasure *fitnessMeasure = new FitnessMeasure(quadGram);

//    Fitness *fitness = new Fitness();
//

    AlphabeticChromosomeGenerator chroGen(englishAlphabet);
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
