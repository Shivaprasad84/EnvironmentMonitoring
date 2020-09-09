#include <iostream>
#include "class2.h"
using namespace std;

class2::class2(int x = 0):x(x)
{
    cout << "Class 1 constructor called" << endl;
}

class2::~class2()
{
    cout << "Class 1 destructor" << endl;
}