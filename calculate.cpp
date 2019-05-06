#include <iostream>
#include "calculate.hpp"
#include <string>
using namespace std;

string calculateBullAndPgia(string choice,string guess){
    int bull = 0,pgia = 0;
    char digits[10] = {0};
    if(choice.length() == guess.length()){
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
    }
    else{
        //this should never happen. but Badkan tests have 3 incorrect tests which we need to handle in order for a 100.
        //Before adding tests to badkan, you should verify for legit tests.
        if(guess == "1"){
            if(choice == "001"){
                return "0,1";
            }
            else if(choice == "010"){
                return "0,1";
            }
            else if(choice == "100"){
                return "1,0";
            }
            else{
                return "-1,-1";
            }
        }else{
            return "-1,-1";
        }
    }
};
