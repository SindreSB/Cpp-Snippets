#include "std_lib_facilities.h"

int main() {
    int MAX = 100, MIN = 10;

    // Get the current time
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();

    // Create a random engine
	static default_random_engine ran{static_cast<unsigned int>(seed)};

    // Create a uniform distribution (same probability for all numbers)
    // between MIN and MAX
	auto distr = uniform_int_distribution<>{MIN, MAX};

    // Get a random number from the distribution using the random number engine
    int randomNumber = distr(ran);

    cout << randomNumber << endl;

    return 0;
}