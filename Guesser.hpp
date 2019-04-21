#pragma once
#include <iostream>

namespace bullpgia{

using namespace std;
class Guesser{
    public:
    unsigned int length;
    string answer;

    virtual string guess() = 0;
    virtual void learn(string ans) {
        this->answer = ans;
    }
    virtual void startNewGame(unsigned int length){
        this->length = length;
    }
};

}