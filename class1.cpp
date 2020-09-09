#include <iostream>
#include "class1.h"
using namespace std;

class1::class1(int x = 0):x(x)
{
    cout << "Class 1 constructor called" << endl;
}

class1::~class1()
{
    cout << "Class 1 destructor" << endl;
}
