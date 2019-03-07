#include <iostream>
#include <string>
#include "ciphers/SubstitutionCipher.h"

using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
//    string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";


//    QuadGram quadGram("english_quadgrams.txt", ' ');
//    FitnessMeasure *fitnessMeasure = new FitnessMeasure(quadGram);

//    Fitness *fitness = new Fitness();
//
//    Chromosome *chromosome = new Chromosome(alphabet);
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


    SubstitutionCipher *substitutionCipher = new SubstitutionCipher(alphabet, "./cipherTexts/test.txt");
    string text = substitutionCipher->Decipher("phqgiumeaylnofdxjkrcvstzwb");

    cout << text << endl;

    return 0;
}