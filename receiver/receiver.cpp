#include <iostream>
#include "receiver.h"
using namespace std;

string recevie_n_analyse(const string& data)
{
    string message = "INFO: " + data;
    cout << message <<  endl;
    return message;
}

