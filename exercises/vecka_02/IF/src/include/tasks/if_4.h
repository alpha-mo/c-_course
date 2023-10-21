#ifndef IF4_H
#define IF4_H

#include "../printer.h"
#include <iostream>
using namespace std;

bool age(){
    string input;
    cout << "what is your age?\nq for exit: ";
    cin >> input;
    
    if(input == "q" || input == "Q") return true;

    try {
        int converted = stoi(input);

        if(converted > 65) printResult("You are retired");
        else if (converted < 18) printResult("You are not an adult");
        else printResult("You are an adult");

        return true;
    }
    catch(const exception &e) {
        cout << "Bad input" << endl;
        return false;
    }
}

#endif