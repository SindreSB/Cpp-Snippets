#include "std_lib_facilities.h"

int main() {

    // Open file
    ifstream file{"numbers.txt"};

    // Check if we were able to open the file
    if (!file) {
        // Something went wrong
    }

    // Now we're ready to read the file

    // Create a string we will use to hold each line of text
    string line;

    // Use getline to read one line at a time from file into a string(line)
    while(getline(file, line)){ 
        // Create a string stream from the string we just read
        stringstream ss{line};

        int day, temp;
        ss >> day;  // Read out the first number from the stringstream
        ss >> temp; // Read out the second number from the stringstream

        // Print it out
        cout << "On day " << day << " it was " << temp << " degrees" << endl;
    }

    return 0;
}