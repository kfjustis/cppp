#pragma once

#include <iostream>
#include <string>
#include <unordered_map>

class Stringer {
public:
    void PrintString(const std::string& s);
    bool IsUnique(const std::string& s);
    bool CheckPermutation (const std::string& s1, const std::string& s2);
};
