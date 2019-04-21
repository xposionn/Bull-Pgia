#include <iostream>
#include "calculate.hpp"
#include <string>
using namespace std;

string calculateBullAndPgia(string choice,string guess){
    int bull = 0,pgia = 0;
    char digits[10] = {0};
    if(choice.length() != guess.length()){
        return "Technical";
    }
    for(int i=0;i<guess.length();i++){
        if(choice.at(i) == guess.at(i)){
            bull++;
        }
        else{
            if(digits[choice.at(i)-'0']-->0) pgia++;
            if(digits[guess.at(i)-'0']++<0) pgia++;
        }
    }
    return to_string(bull) + "," + to_string(pgia);
};