#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("C is a programing language");
    string str2;
    str2.assign(str, 7, 20); // here, value of str from index 7 to 20 character is assigned to string str2.
    cout << endl << str2;
    cout << endl << "input string : " << str;
    return 0;
}