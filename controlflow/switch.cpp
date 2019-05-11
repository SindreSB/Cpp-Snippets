#include "std_lib_facilities.h"

int main() {
    int s = 5;
	switch (s)
	{
	case 1:
		cout << "s is 1";
		break;
	case 4: // We let case 4 "fall through" to case 5
	case 5:
		cout << "s is 4 or 5";
		break;
	default:
		break;
	}

    return 0;
}