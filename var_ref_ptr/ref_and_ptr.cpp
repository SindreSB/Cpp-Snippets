#include "std_lib_facilities.h"

void func(int a, int &b_ref, int* c_ptr) {
    a = 10;
    b_ref = 10;
    *c_ptr = 10;
}

int main() {
    int a = 0, b = 0, c = 0;

    func (a, b, &c);

    cout << a << ", " << b << ", " << c << endl;
}