#include "receiver/receiver.h"
#include <iostream>
using namespace std;

int main()
{
    string recv;
    getline(cin, recv);
    recevie_n_analyse(recv);
    return 0;
}