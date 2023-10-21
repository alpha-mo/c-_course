#ifndef IF2_H
#define IF2_H

#include "../printer.h"
#include <iostream>
using namespace std;

bool packages(){
    string input;
    cout << "how many packages of milk we have left?\nq for exit: ";
    cin >> input;
    
    if(input == "q" || input == "Q") return true;

    try {
        int converted = stoi(input);
        printResult (
                        converted < 10 ? "Order 30 packages." : 
                            (
                                converted <= 20 ? "Order 20 packages" : "No need to order any milk."
                            )
                    );
        return true;
    }
    catch(const exception &e) {
        cout << "Bad input" << endl;
        return false;
    }
}

#endif