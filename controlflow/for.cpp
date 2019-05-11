#include "../std_lib.h"

int main() {
    // Regular for loop
    for (int i = 0; i < 10; i++) {
		// Do something 10 times
	}

    // Create a vector to use for the next examples
    vector<int> v = {1, 2, 3, 4};

    // For each, not using reference
    for (int a: v) {
        cout << a << endl;
    }

    // For each, getting a reference
    for (int& a: v) {
        cout << a << endl;
    }

    // For each, using auto and reference
    for (auto& a: v) {
        cout << a << endl;
    }

    return 0;
}