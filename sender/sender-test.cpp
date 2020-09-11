// #define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

// #include "../includes/catch.hpp"
// #include "sender.h"
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;

// TEST_CASE("Test Sender", "[vector]") {
//     vector<string> param_vector;
//     ifstream myfile;
//     myfile.open("../TestData/temperature-humidity.csv");
//     param_vector = send_data("../TestData/temperature-humidity.csv");
//     int index = 0;
//     while(myfile.good())
//     {
//         string line;
//         getline(myfile, line);
//         REQUIRE(param_vector[index] == line);
//         index++;
//     }
// }