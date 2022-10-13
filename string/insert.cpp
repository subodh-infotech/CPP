#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("javat tutorial");
    string s("point");

    cout << endl << "original string : " << str;
    str.insert(5, s); // here, insert method insert "point" string to str after index 5.
    cout << endl << "modified string : " << str;
    return 0;
}