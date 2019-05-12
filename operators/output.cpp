#include "std_lib_facilities.h"

struct SampleClass {
    int value = 10;
};

ostream& operator << (ostream& os, const SampleClass& a) {
    os << a.value;
}

int main() {
    
    SampleClass sample;

    cout << sample << endl;

    return 0;
}