#include "RealStringHash.h"

StrHash::StrHash(int p, int m) : prime_number(p), module(m) {};

int StrHash::hash(std::string str) {
        long long hash{};
        for (int i{}; i < str.size(); ++i) {
            hash += static_cast<short>(str[i]) * static_cast<long long>(pow(prime_number, i));
        }
        return hash % module;
    }