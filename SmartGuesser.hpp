#pragma once
#include <iostream>
#include "Guesser.hpp"

namespace bullpgia{

using namespace std;
class SmartGuesser : public bullpgia::Guesser {
    public:
    virtual string guess();
};

}