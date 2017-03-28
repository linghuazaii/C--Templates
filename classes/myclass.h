#ifndef _MY_CLASS_H
#define _MY_CLASS_H
/*
 * File: myclass.h
 * Author: Charles, Liu.
 */
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(){}
    ~MyClass(){}
    const char *print() {
        return "calling MyClass::print";
    }
};


#endif
