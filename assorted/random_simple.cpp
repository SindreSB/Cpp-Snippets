#include "std_lib_facilities.h"

int main() {
    // Seed the random number generator, we only do this once!
    srand(time(nullptr));    

    // Get a random number between 0 and RAND_MAX
    int randomNumber = rand();

    // Make randomNumber be between min and max
    int MAX = 100, MIN = 10;
    randomNumber = (randomNumber % (MAX - MIN + 1)) + MIN;

    cout << randomNumber << endl;

    return 0;
}