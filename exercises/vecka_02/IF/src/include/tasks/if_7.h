#ifndef IF7_H
#define IF7_H

#include "../printer.h"
#include <iostream>
using namespace std;

bool burger(){
    string amount;
    unsigned int amountInt;

    bool amountExit = false;
    while(!amountExit){
        cout << "Enter amount of money or q to exit: ";
        cin >> amount;
        if(amount == "q" || amount == "Q") return true;

        try{
            amountInt = stoi(amount);
            amountExit = true;
        }
        catch(const std::exception& e){
            cout << "Bad input" << endl;
            return false;
        }
    }
    
    string eligable;
    bool eligableBool = false;

    bool eligableExit = false;
    while(!eligableExit){
        cout << "Eligable for discount Y/N or q to exit: ";
        cin >> eligable;
        if(eligable == "q" || eligable == "Q") return true;
        if (eligable == "y" || eligable == "Y" || eligable == "n" || eligable == "N"){
            eligableBool = (eligable == "y" || eligable == "Y") ? true : false;
            eligableExit = true;
        } else cout << "Bad input" << endl;
        
    }

    if(amountInt >= 15 && amountInt <= 25 && !eligableBool) printResult("You can  buy small hamburger");
    else if(amountInt >= 15 && amountInt <= 25 && eligableBool) printResult("You can  buy small hamburger and fries");
    else if(amountInt > 25 && amountInt <= 50 && !eligableBool) printResult("You can buy a large hamburger");
    else if(amountInt > 25 && amountInt <= 50 && eligableBool) printResult("You can buy a large hamburger and fries");
    else if(amountInt > 50 && eligableBool) printResult("You an buy a meal with drink");
    else printResult("You can't buy anything.");
    return true;
}

#endif