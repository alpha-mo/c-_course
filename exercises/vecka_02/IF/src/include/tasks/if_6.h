#ifndef IF6_H
#define IF6_H

#include "../printer.h"
#include <iostream>
using namespace std;

bool scand(){
    string input;
    cout << "Tell us where do you live\n\t[1] Sverige\n\t[2] Denmark\n\t[3] Norway\n\t[4] Other\n\t[q] exit";
    cin >> input;
    
    if(input == "q" || input == "Q") return true;
    else if(input == "1" || input == "2" || input == "3"){
        printResult("You live in Scandinavia.");
        return true;
    }
    else if(input == "4"){
        printResult("You don't live in Scandinavia");
        return true;
    }else {
        cout << "Bad input";
        return false;
    }
}

#endif