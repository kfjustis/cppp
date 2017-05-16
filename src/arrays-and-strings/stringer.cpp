#include "stringer.h"

void Stringer::PrintString(const std::string& s) {
    std::cout << s << std::endl;
}

bool Stringer::IsUnique(const std::string& s) {
    // We don't care about order, so why not get average O(1) powers?
    std::unordered_map<char, int> str_map;
    
    // If character isn't in the map, add it
    // Otherwise, string is not unique so return false
    for (int i = 0; i < s.length(); ++i) {
        std::unordered_map<char, int>::const_iterator found = str_map.find(s[i]);
        if (found == str_map.end()) {
            str_map.insert({s[i], i});
        } else {
            return false;
        }
    }
    
    /* Uncomment to print map as well
    std::cout << "Map contents: " << std::endl;
    for (auto item = str_map.begin(); item != str_map.end(); ++item)
        std::cout << " " << item->first << ":" << item->second << std::endl;
    */
    
    return true;
}
