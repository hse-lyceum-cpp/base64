#include "base64.h"
#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello world";
    std::string result = base64::encode(str.begin(), str.end());
    std::cout << base64::decode(result) << '\n';
}
