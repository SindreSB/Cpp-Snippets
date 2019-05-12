#include "std_lib_facilities.h"

/**
 * Define a type Person which holds a name and an age
 * 
 * We wish to keep the name and age private, so it cant be changed
 * 
 * Since name and age are private, we need to provide get functions
 * 
 * */
class Person 
{
private:
    string name;
    int age;
public:
    Person(string name, int age);

    string getName() { return name; }
    int getAge() {return age; }
};

Person::Person(string name, int age): name{name}, age{age} { /*Empty body*/};


int main() {
    
    Person p{"Sindre", 23};
    
    cout << p.getName() << endl;
    cout << p.getAge() << endl;

    return 0;
}