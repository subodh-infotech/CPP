#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("hello world");
    cout << endl << "String ==> " << str;
    cout << endl << "first character of string => " << str.front();

    // change the first character of string
    str.front() = 'H';
    cout << endl << "modified string : " << str;
    
    return 0;
}