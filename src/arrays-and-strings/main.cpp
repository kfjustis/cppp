#include <iostream>

#include "stringer.h"

using namespace std;

int main() {
    cout << "Testing C++..." << endl;
    cout << "Hello, world!" << endl;

    // Create instance of Stringer
    Stringer str;
    cout << "Testing classes..." << endl;
    str.PrintString("From way downtoooown!");
    
    cout << "Testing IsUnique..." << endl;
    bool string_check = str.IsUnique("funny");
    cout << string_check << endl;
    
    cout << "Testing CheckPermutation..." << endl;
    bool string_check2 = str.CheckPermutation("lllll", "lllli");
    cout << string_check2 << endl;
}
