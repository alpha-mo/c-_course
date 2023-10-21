#ifndef IF1_H
#define IF1_H

#include "../definitions.h"
#include "../utils.h"
#include "../printer.h"
#include <iostream>
using namespace std;

bool largerThanTen(){
    string input;
    cout << "Enter a number or q to exit: ";
    cin >> input;
    
    if(input == "q" || input == "Q") return true;

    try {
        int converted = stoi(input);
        string output("You entered: " + input + ", which is " + (converted > 10 ? "Larger than 10" : "Smaller than 10"));
        printResult(output);
        return true;
    }
    catch(const exception &e) {
        cout << "Bad input" << endl;
        return false;
    }
}

#endif