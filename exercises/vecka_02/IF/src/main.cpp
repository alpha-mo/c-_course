#include <iostream>
#include "include/includer.h"

using namespace std;

int main(){
    
    bool exit = false;
    string input;
    int converted;

    clearScreen();

    while(!exit){

        printMenu();

        cin >> input;
        if(input == "q" || input == "Q"){
            exit = true;
            printGoodbye();
            break;
        }

        validateInput(converted, input);

        switch (converted) {
            case ten + 1:
                printTitle(ten);
                while(!largerThanTen()){}
                break;
            case milk + 1:
                printTitle(milk);
                while(!packages()){}
                break;
            case temperature + 1:
                printTitle(temperature);
                while(!doctor()){}
                break;
            case kidOrAdult + 1:
                printTitle(kidOrAdult);
                while(!age()){}
                break;
            case price + 1:
                printTitle(price);
                while(!trip()){}
                break;
            case scandinavian + 1:
                printTitle(scandinavian);
                while(!scand()){}
                break;
            case money + 1:
                printTitle(money);
                while(!burger()){}
                break;
            default:
                clearScreen();
                cout << "Bad input";
                break;
        }
        
    }

    return 0;
}