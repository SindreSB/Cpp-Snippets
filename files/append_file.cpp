#include "../std_lib.h"

int main() {
    ofstream logFile{"logs.txt", ofstream::app}; // Notice we pass it mode = app (append)

    if (!logFile) {
        // Something went wrong
        throw runtime_error("Couldn't open file");
    }

    // Lets just add lines to the log
    for (size_t i = 0; i < 10; i++)
    {
        logFile << "Thing " << i << " just occured" << endl;
    }

    // No need to close the file    

    return 0;
}