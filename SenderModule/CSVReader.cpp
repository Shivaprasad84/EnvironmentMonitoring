#include <iostream>
#include <fstream>
#include <string>
#include "CSVReader.hpp"

CSVReader::CSVReader(const std::string& filepath):filepath(filepath) 
{
    try
    {
        readFromFile.open(filepath, std::ios::in);
    }
    catch(...)
    {
        closeFileIfOpen(readFromFile);
        throw "FileNotFoundError: " + filepath + " does not exist or file empty";
    }
    
}

void CSVReader::closeFileIfOpen(std::ifstream& readFromFile)
{
    if(readFromFile.is_open())
    {
        readFromFile.close();
    }
}

bool CSVReader::good()
{
    return readFromFile.good();
}

std::string CSVReader::fetch_current_row()
{
    std::string current_data;
    if(readFromFile.good())
    {
        std::getline(readFromFile, current_data);
        return current_data;
    }
    return "";
}

CSVReader::~CSVReader()
{
    closeFileIfOpen(readFromFile);
}
