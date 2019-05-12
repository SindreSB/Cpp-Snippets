#include "std_lib_facilities.h"

int main() {
    string str = "Hello :)";

    // By using the constructor string(str, start, end)
    // we can get a substring. Note that end is non inclusive
    string helloString = string(str, 0, 5);

    cout << helloString << endl;    

    // We can also just specify the start, and then it take
    // everything until the end
    string smileyString = string(str, 6);

    cout << smileyString << endl;

    return 0;
}