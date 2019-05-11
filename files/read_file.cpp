#include "../std_lib.h"

int main() {

    // Open file
    ifstream file{"numbers.txt"};

    // Check if we were able to open the file
    if (!file) {
        // Something went wrong
    }

    // Now we're ready to read the file
    string line;
    while(getline(file, line)){
        stringstream ss{line};

        int day, temp;
        ss >> day;
        ss >> temp;

        cout << "On day " << day << " it was " << temp << " degrees" << endl;
    }

    // We do not need to close the file here

    return 0;
}