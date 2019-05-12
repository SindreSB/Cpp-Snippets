#include "std_lib_facilities.h"

int main() {
    // File does not need to exist
    ofstream file {"outfile.txt"}; 

    // We can throw strings
    if (!file) {
        throw "Error"; 
    }

    file << "Num: " << 2 << endl; 

    return 0;
}