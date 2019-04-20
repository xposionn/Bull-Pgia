#pragma once
#include <iostream>

namespace bullpgia{

using namespace std;
class SmartGuesser : public Guesser{
    public:
    virtual string guess();
};

}