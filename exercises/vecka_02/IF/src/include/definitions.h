#ifndef DEF_H
#define DEF_H

#include<iostream>
using namespace std;

struct MenuItem
{
    string number;
    string text;
};

enum ITEM{ten, milk, temperature, kidOrAdult, price, scandinavian, money};

MenuItem menu[] = {
    { "[1] ",  "Larger than ten"},
    { "[2] ",  "Milk inventory"},
    { "[3] ",  "Your (NOT!) trusty doctor!"},
    { "[4] ",  "Kid, adult or retiree"},
    { "[5] ",  "Charge you based on age!"},
    { "[6] ",  "Scandinavian or not that is the question"},
    { "[7] ",  "It's all about money"},
    { "[q] ",  "exit"},
};

#endif