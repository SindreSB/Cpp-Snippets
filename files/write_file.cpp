#include "std_lib_facilities.h"

int main() {
    ofstream file {"outfile.txt"}; // File does not need to exist

    if (!file) {
        throw "Something bad happened"; // We can throw strings
    }

    file << "Write some text and the number " << 2 << "to the file" << endl; 

    return 0;
}