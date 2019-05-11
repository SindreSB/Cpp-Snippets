#include "std_lib_facilities.h

int main() {
    int value = 0;
	if (value > 0) {
		// Do something if value is positive	
	}
    else if (value < 0) {
        // Do something if value is negative
    }
	else {
		// Do something if value is zero
	}	

    // We don't need an else 
    if (true) {
        // Do something
    }

    // We can have if and else if without else as well
    if (0 == 1) {
        // Probably this will never be true
    }
    else if (1 == 11){
        // This will not happen either
    }
    // But we don't need an else here

    return 0;
}