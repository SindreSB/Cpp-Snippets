#include "std_lib_facilities.h"

class Bike
{
    int numberOfWheels;
public:
    Bike(int numberOfWheels): numberOfWheels{numberOfWheels} {/*Empty body*/}

    int getNumberOfWheels() {return numberOfWheels; }
};

class ElectricBike : public Bike
{
    int batteryCapacity;

public:
    ElectricBike(int batteryCapacity): Bike(2), batteryCapacity{batteryCapacity} {}

    int getBatteryCapacity() {return batteryCapacity; }
};

int main() {
    ElectricBike ev(1000);

    // We see electric bike has inherited the getNumberOfWheels function
    cout << ev.getNumberOfWheels() << endl;

    return 0;
}