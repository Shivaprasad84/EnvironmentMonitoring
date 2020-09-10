#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<pair<string, string>> temp_humidity = {make_pair("25", "30"), make_pair("30", "60")};
    for(auto i : temp_humidity)
    {
        std::cout << i.first << ", " << i.second << endl;
    }
    return 0;
}