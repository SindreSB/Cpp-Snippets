#include "std_lib_facilities.h"

int main() {
    vector<int> myVector = {1, 2, 3, 4, 5};

    vector<int>::iterator myVectorIterator = myVector.begin();

    for (auto it = myVector.begin(); it != myVector.end(); it++)
    {
        cout << *it << endl;
    }    

    return 0;
}