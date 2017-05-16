#include "stringer.h"

void Stringer::PrintString(const std::string& s) {
    std::cout << s << std::endl;
}

bool Stringer::IsUnique(const std::string& s) {
    std::unordered_map<char, int> str_map;
    
    for (int i = 0; i < s.length(); ++i) {
        std::unordered_map<char, int>::const_iterator found = str_map.find(s[i]);
        if (found == str_map.end()) {
            str_map.insert({s[i], i});
        } else {
            return false;
        }
    }
    
    /* Print map for fun
    std::cout << "Map contents: " << std::endl;
    for (auto item = str_map.begin(); item != str_map.end(); ++item)
        std::cout << " " << item->first << ":" << item->second << std::endl;
    */
    
    return true;
}
