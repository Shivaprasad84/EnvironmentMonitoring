#include <iostream>
#include <fstream>
#include <vector>
#include "sender.h"

using namespace std;


vector<string> send_data()
{
    ifstream myfile;
    myfile.open("../TestData/temperature-humidity.csv");
    vector<string> param_vectors;
    while(myfile.good()) 
    {
        string line;
        getline(myfile, line);
        cout << line << endl;
        param_vectors.push_back(line);
    }
    myfile.close();
    return param_vectors;
}