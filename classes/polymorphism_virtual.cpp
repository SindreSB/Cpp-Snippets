#include "std_lib_facilities.h"

struct Vehicle {
    string regNum;

    Vehicle(string regNr): regNum{regNr} {}

    virtual void print() = 0;
};

struct Bus: public Vehicle{
    int maxPassengers;

    Bus(string regNr, int pas): Vehicle{regNr}, maxPassengers{pas} {}

    void print() { 
        cout << regNum << ": " << maxPassengers << endl; 
    }
};

struct Truck: public Vehicle {
    int maxCargo;

    Truck(string regNr, int maxCargo): Vehicle{regNr}, maxCargo{maxCargo} {}

    void print() { 
        cout << regNum << ": " << maxCargo << endl; 
    }
};


int main() {
    vector<Vehicle *> vehicles;
    vehicles.push_back(new Bus("AB12345", 50));
    vehicles.push_back(new Bus("AB00000", 50));
    vehicles.push_back(new Truck("AA12345", 20));
    vehicles.push_back(new Truck("AC67890", 10));
    
    for (auto veh_ptr: vehicles) {
        veh_ptr->print();
    }

    return 0;
}