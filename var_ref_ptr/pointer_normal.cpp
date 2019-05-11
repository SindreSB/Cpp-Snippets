#include "std_lib_facilities.h"

int main() {
    int a = 10;

    cout << a << endl; // This will print 10

    int* a_ptr = &a;    // We get the location of a in memory
    *a_ptr = 20;        // And then we go and change the value at that location

    cout << a << endl; // This prints 20

    return 0;
}