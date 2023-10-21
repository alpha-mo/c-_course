#ifndef PRNT_H
#define PRNT_H

#include "definitions.h"
#include "utils.h"
#include <chrono>
#include <thread>
#include <iostream>
using namespace std;

void printMenu(){

    cout << "\nChoose an operation to run:\n";
    for(MenuItem item : menu){
        cout << item.number << item.text << endl;
    }
    cout << "Your choice: ";
}

void printTitle(ITEM item){
    
    clearScreen();

    string title = menu[item].text;

    auto delay = chrono::milliseconds(20);
    auto width = title.size() + 4;

    cout << (char)201;

    for(unsigned long long i = 0; i < width; i++){
        this_thread::sleep_for(delay);
        cout << (char)205;
    }

    cout << (char)187 << endl << (char)186 << "  ";

    for(char ch : title){
        this_thread::sleep_for(delay);
        cout << ch;
    }

    cout << "  " << (char)186 << endl << (char)200;

    for(unsigned long long i = 0; i < width; i++){
        this_thread::sleep_for(delay);
        cout << (char)205;
    }

    cout << (char)188 << endl;
}

void printResult(string text){
    cout << "working ";
    
    for(int i = 0; i < 8; i++){
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << (char)205;
    }

    unsigned long long width = text.size() + 4;
    string separator (width, (char)176);

    this_thread::sleep_for(chrono::milliseconds(60));
    cout << "\n" << separator << endl;

    this_thread::sleep_for(chrono::milliseconds(60));
    cout << "  " << text << endl;

    this_thread::sleep_for(chrono::milliseconds(60));
    cout << separator << endl;

    this_thread::sleep_for(chrono::milliseconds(1000));
}

void printGoodbye(){
    clearScreen();
    auto delay =  chrono::milliseconds(100);
    cout << endl;
    for(char ch : "Goodbye..."){
        this_thread::sleep_for(delay);
        cout << ch;
    }
}

#endif