
/*
    append() -> this method is used to append the new string value to existing string.
    followings are the syntax - 
    str1.append(str2); -> append method add entire value of str2 at the end of str1.
    str1.append(str2, pos, len); -> this method add the 'len' character from index 'pos' of string str2 at the end of str1.
    str1.append(str2, len); -> this method add the 'len' character from index '0' of string str2 at the end of str1.

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1("Welcome to C++ programming");
    
    cout << endl << "String before appending data => " << str1;

    str1.append(" language");
    cout << endl << "String after appending value => " << str1;
    return 0;
}