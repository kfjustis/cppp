#include "stringer.h"

using namespace std;

// Simply prints the string that was passed to the console
void Stringer::PrintString(const std::string& s) {
    cout << s << endl;
}

// Checks to see if every character in the passed string is unique
// Returns true if so, false otherwise
//
// Assumes ASCII character set
bool Stringer::IsUnique(const std::string& s) {
    if (s.length() > 128) {
        return false;
    }
    // We don't care about order, so why not get average O(1) powers?
    unordered_map<char, int> char_map;
    
    // If character isn't in the map, add it
    // Otherwise, string is not unique so return false
    for (int i = 0; i < s.length(); ++i) {
        unordered_map<char, int>::const_iterator found = char_map.find(s[i]);
        if (found == char_map.end()) {
            char_map.insert({s[i], i});
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

// Checks to see if the passed strings are permutations of each other
// If so returns true, otherwise returns false
//
// Assumes ASCII character set
bool Stringer::CheckPermutation(const std::string& s1, const std::string& s2) {
    // Can't have a permutation of different lengths
    if (s1.length() != s2.length()) {
        return false;
    }
    
    // Generate occurrence maps
    unordered_map<char, int> occur_map1;
    unordered_map<char, int> occur_map2;
    
    for (int i = 0; i < s1.length(); ++i) {
        unordered_map<char, int>::const_iterator found1 = occur_map1.find(s1[i]);
        unordered_map<char, int>::const_iterator found2 = occur_map2.find(s2[i]);
        
        if (found1 == occur_map1.end()) {
            occur_map1.insert({s1[i], 1});
        } else {
            // Increment occurrence count if we already have it
            occur_map1.at(found1->first) += 1;
        }
        
        if (found2 == occur_map2.end()) {
            occur_map2.insert({s2[i], 1});
        } else {
            // Same as above else
            occur_map2.at(found2->first) += 1;
        }
    }
    
    // If the maps are different sizes, then we return false
    // because permutations should be the same length
    if (occur_map1.size() != occur_map2.size()) {
        return false;
    }
    
    // Compare the maps
    for (auto item = occur_map1.begin(); item != occur_map1.end(); ++item)
        if (item->second != occur_map2.at(item->first)) {
            return false;
        }
    
    /* Prints the maps on success
    std::cout << "Map contents 1: " << std::endl;
    for (auto item = occur_map1.begin(); item != occur_map1.end(); ++item)
        std::cout << " " << item->first << ":" << item->second << std::endl;
    
    std::cout << "Map contents 2: " << std::endl;
    for (auto item = occur_map2.begin(); item != occur_map2.end(); ++item)
        std::cout << " " << item->first << ":" << item->second << std::endl;
    */
    
    return true;
}
