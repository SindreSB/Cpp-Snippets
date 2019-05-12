#include "std_lib_facilities.h"

struct Temp {
    int low;
    int high;
};

istream& operator >>(istream& is, Temp& t) {
    is >> t.low >> t.high;
}

int main() {
    stringstream s("2 10");

    Temp t;
    s >> t;

    cout << t.low << " " << t.high << endl;

    return 0;
}