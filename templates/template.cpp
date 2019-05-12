#include "std_lib_facilities.h"

template<typename T>
struct Test {
    Test(T v): value{v}{}
    T value;
    T getValue(){return value; }
};


int main() {
    

    return 0;
}