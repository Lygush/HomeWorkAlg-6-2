#pragma once
#include <string>

class StrHash {
    int prime_number {};
    int module{};
public:
    StrHash(int p, int m);
    int hash(std::string str);
};