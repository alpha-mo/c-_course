#ifndef IF5_H
#define IF5_H

#include "../printer.h"
#include <iostream>
using namespace std;

bool trip(){
    string input;
    cout << "please type:\n\t\tA for adult\n\t\tS for student\n\t\tor R for retired\ntype q for exit: ";
    cin >> input;
    
    if(input == "q" || input == "Q") return true;
    else if(input == "R" || input == "r" || input == "s" || input == "S"){
        printResult("The trip costs 20 kr.");
        return true;
    }
    else if(input == "A" || input == "a"){
        printResult("The trip costs 30 kr.");
        return true;
    }else {
        cout << "Bad input";
        return false;
    }
}

#endif