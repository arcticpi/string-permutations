#include <iostream>
using namespace std;

void permutations(std::string string, std::string prefix)
{
    if (string.length() == 0)
    {
        std::cout << prefix << std::endl;
    }
    else
    {
        for (int i = 0; i < string.length(); i++)
        {
            std::string postfix = string.substr(0, i) + string.substr(i + 1);
            permutations(postfix, prefix + string.at(i));
        }
    }
}

int main()
{
    permutations("abcd", "");
    return 0;
}