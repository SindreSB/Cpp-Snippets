#include "std_lib_facilities.h"

int main() {
    int a;
    int *a_ptr;

    a = 10;
    a_ptr = (int* ) 10;
    
    cout << a << endl;
    cout << a_ptr << endl;

    // Uncommenting the following line will cause the program to crash
    // *a_ptr = 0;

    return 0;
}