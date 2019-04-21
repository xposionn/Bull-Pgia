#pragma once
#include <iostream>
#include "Guesser.hpp"

namespace bullpgia{

using namespace std;
class SmartGuesser : public bullpgia::Guesser {
    public:
    string lastguess;
    int lastbull;
    int lastpgia;
    int noappear;
    virtual string guess();
};

}