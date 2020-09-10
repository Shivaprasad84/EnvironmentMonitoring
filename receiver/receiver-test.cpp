#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "../includes/catch.hpp"
#include "receiver.h"
#include <iostream>
using namespace std;

TEST_CASE("Reads stdin data and displays", "[string]") {
    string custom_data[] = {"12,45", "35,60", "44,89"};
    for(int i = 0; i < 3; i++)
    {
        string expected_message = "INFO: " + custom_data[i];
        REQUIRE(recevie_n_analyse(custom_data[i]) == expected_message);   
    }
}