#include <iostream>
#include "class1.h"
using namespace std;

class1::class1(int x):x(x)
{
    cout << "Class 1 constructor called" << endl;
    cout << "x: " << x << endl;
}

class1::~class1()
{
    cout << "Class 1 destructor" << endl;
}
