#include "std_lib_facilities.h"

template<typename T>
T myMax(T t, T k) {
    if (t > k) {
        return t;
    } else {
        return k;
    }
}

int main() {
    int a = 2, b = 3;

    int c = myMax<int>(a, b);

    cout << c << endl;

    return 0;
}