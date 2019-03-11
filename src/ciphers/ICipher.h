#ifndef THECODEBOOKCIPHERCHALLENGES_CIPHER_H
#define THECODEBOOKCIPHERCHALLENGES_CIPHER_H

using namespace std;

template<class T>
class ICipher {
public:
    virtual  ~ICipher() = default;

    virtual T Decipher(T key) = 0;
};

#endif //THECODEBOOKCIPHERCHALLENGES_CIPHER_H
