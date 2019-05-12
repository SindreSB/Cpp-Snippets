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
    
    IntTest<string, 3> test("Hei");

    cout << test.getNumber() << endl;

    return 0;
}