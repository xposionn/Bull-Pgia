#pragma once
#include <iostream>

namespace bullpgia{

using namespace std;
class SmartGuesser : public bullpgia::Guesser {
    public:
    virtual string guess();
};

}