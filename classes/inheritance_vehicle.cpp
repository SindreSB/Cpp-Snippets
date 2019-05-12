#include "std_lib_facilities.h"

struct Vehicle {
    string regNum;
};

struct Bus: public Vehicle{
    int maxPassengers;
};

struct Truck: public Vehicle {
    int maxCargo;
};

int main() {
    

    return 0;
}