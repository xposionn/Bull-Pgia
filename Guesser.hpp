#pragma once
#include <iostream>

namespace bullpgia{

using namespace std;
class Guesser{
    public:
    unsigned int length;
    virtual string guess();
    void learn(string);
    void startNewGame(unsigned int length);
};

}