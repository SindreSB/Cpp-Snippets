#include "std_lib_facilities.h"

struct Person
{
    Person() {}                     // Default konstruktør
    Person(string name) {}          // Konstruktør som tar et parameter

    Person(const Person& p) {}      // Kopi konstruktør

    ~Person() {}                    // Destruktør
};

int main() {
    


    return 0;
}