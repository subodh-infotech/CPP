/*
    begin() -> this function is used to get the reference of first character.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("B language");
    cout << endl << "String => " << str;
    cout << endl << "first character in the string => " << *str.begin();
    // change the first character of string
    char &first = *str.begin();
    first = 'C';
    cout << endl << "Modified string : " << str;
    
    return 0;
}