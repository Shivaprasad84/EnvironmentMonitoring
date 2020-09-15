#include "../Lib/catch.hpp"
#include "CSVReader.hpp"
#include <fstream>
#include <string>

TEST_CASE("ALL Rows of CSV file is read")
{
    int row_count = 13;
    int current_row_count = 0;
    std::string CSVReaderFilePath = "sender_testdata/temperature-humidity.csv";
    CSVReader reader(CSVReaderFilePath);
    while(reader.good())
    {
        reader.fetch_current_row();
        current_row_count++;
    }
    REQUIRE(current_row_count == row_count);
}   

TEST_CASE("When Two CSV files contains same data Assert Equality for all rows")
{
    std::string CSVReaderFilePath = "sender_testdata/temperature-humidity.csv";
    std::string DifferentCSVFilePath = "sender_testdata/temperature-humidity_copy.csv";

    std::ifstream readFromFile;
    readFromFile.open(DifferentCSVFilePath, std::ios::in);

    CSVReader reader(CSVReaderFilePath);

    while(readFromFile.good() && reader.good())
    {
        std::string current_expected_line;
        std::getline(readFromFile, current_expected_line);

        std::string reader_fetch = reader.fetch_current_row();

        REQUIRE(reader_fetch == current_expected_line);
    }
}

TEST_CASE("When Two CSV files contains Unequal data Assert Unequility for all rows")
{
    std::string CSVReaderFilePath = "sender_testdata/temperature-humidity.csv";
    std::string DifferentCSVFilePath = "sender_testdata/temperature-humidity2.csv";

    std::ifstream readFromFile;
    readFromFile.open(DifferentCSVFilePath, std::ios::in);

    CSVReader reader(CSVReaderFilePath);

    while(readFromFile.good() && reader.good())
    {
        std::string current_expected_line;
        std::getline(readFromFile, current_expected_line);

        std::string reader_fetch = reader.fetch_current_row();

        REQUIRE(reader_fetch != current_expected_line);
    }
}


TEST_CASE("Throws Exception if file not available")
{
    std::string filepath = "sender_testdata/temp-humidity.csv";
    std::string expected_message = "FileNotFoundError: " + filepath + " does not exist or file empty";
    REQUIRE_THROWS_WITH(CSVReader(filepath), expected_message); 
}