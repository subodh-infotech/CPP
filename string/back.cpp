/*
    back() -> this function is used to get the last character of the string.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("B.Sc. in Information Technology.");
    char ch = str.back();
    cout << endl << "string ==> " << str;
    cout << endl << "last character of string : " << ch;

    // change the last character of string
    char &back = str.back();
    back = '!';
    cout << endl << "modified string ==> " << str;
    return 0;
}