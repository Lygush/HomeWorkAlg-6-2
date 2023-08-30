#include <iostream>
#include "RealStringHash.h"

int main() {
    bool exit{true};
    std::string str{};
    int p{}, m{};
    std::cout << "Enter prime number: ";
    std::cin >> p;
    std::cout << "Enter module: ";
    std::cin >> m; 
    StrHash SH(p,m);
    while (exit) {
        std::cout << "Enter sting: ";
        std::cin >> str;
        if (str == "exit") {
            std::cout << "Simple hash \"" << str << "\" : " << SH.hash(str);
            exit = false;
        }
        else {
            std::cout << "Simple hash \"" << str << "\" : " << SH.hash(str) << std::endl;
        }
    } 
}