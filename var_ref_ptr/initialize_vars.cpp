#include <iostream>

using namespace std;

int main() {
	string greeting = "Hello Tekna";		// Initialize using =
	string greeting1 ( "Hello Tekna" );		// Call the constructor
	string greeting2 { "Hello Tekna" };		// Same as above, but alos support initializer list, and wars on truncation

	cout << greeting << endl;

	return 0;
}