#include <iostream>

using namespace std;

int main() {
    double a = 3.14;

	long long* llp = reinterpret_cast<long long*>(&a);

	cout << a << endl;
	cout << llp << endl;
	cout << *llp << endl;

    return 0;
}