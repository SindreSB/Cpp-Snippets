#include "std_lib_facilities.h"

int main() {
    
    // Open file
    ifstream file{"numbers.txt"};

    // Check if we were able to open the file
    if (!file) {
        throw "Error";
    }

    // Now we're ready to read the file
    char c;
    while(file >> c){
        cout << c;
    }

    // We do not need to close the file here

    return 0;
}