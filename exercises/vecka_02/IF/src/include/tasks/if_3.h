#ifndef IF3_H
#define IF3_H

#include "../printer.h"
#include <iostream>
using namespace std;

bool doctor(){
    string input;
    cout << "what is your temperature?\nq for exit: ";
    cin >> input;
    
    if(input == "q" || input == "Q") return true;

    try {
        float converted = stof(input);

        if(converted < 37.8) printResult("Nofever");
        else if (converted > 40.5) printResult("Congratulation you're dead!");
        else if (converted > 39.5) printResult("You should find a doctor");
        else printResult("You've got fever");

        return true;
    }
    catch(const exception &e) {
        cout << "Bad input" << endl;
        return false;
    }
}

#endif