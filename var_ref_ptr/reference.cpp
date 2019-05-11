#include "std_lib_facilities.h"

int main() {
    int a = 10;
    int& a_ref = a;

    a_ref = 20;

    cout << a << endl;

    return 0;
}