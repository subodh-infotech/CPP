/*
this program copy the array of integer to vector.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    vector<int> v(5);

    // copy the all elements of array to vector
    copy(a, a+5, v.begin());

    // display elements from vector
    for(auto b : v) {
        cout << endl << b;
    }
    
    return 0;
}