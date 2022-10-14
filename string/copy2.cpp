#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("cpp programs");
    char str2[13];
    str.copy(str2, 8,4); // here, copy() method copy the each character of string str from index 4 to total 8 character.
    cout << endl << str2;
    return 0;
}