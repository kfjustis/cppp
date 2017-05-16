#include <iostream>

#include "stringer.h"

using namespace std;

int main() {
    cout << "Hello, world!\n";

    // Create instance of Stringer
    Stringer str;
    str.PrintString("From way downtoooown!");
    
    bool string_check = str.IsUnique("funny");
    cout << string_check << endl;
}
