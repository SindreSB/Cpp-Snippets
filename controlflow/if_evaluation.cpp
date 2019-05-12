#include "std_lib_facilities.h"

int main() {
    
    int i = 0;
    if (false && i++ == 1) {
        // This will never happen
    }

    // Is the value of i 0 or 1 here? 
    cout << i << endl;

    // And the other way around with OR
    int j = 0;
    if (true || j++ == 1) {
        // This will always happen
    }

    cout << j << endl;

    return 0;
}