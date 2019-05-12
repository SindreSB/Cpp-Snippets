#include "std_lib_facilities.h"

template<typename T, int I>
struct IntTest {
    T value;
    int number = I;

    IntTest(T s): value{s} {}
    T getValue(){return value; }

    int getNumber() {return number; }
};

int main() {
    

    return 0;
}