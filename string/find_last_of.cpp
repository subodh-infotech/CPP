/*
    find_last_of() => This function searches the string for the last character that matches any of the character specified in the string.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("welcome to GeeksforGeeks");

    char ch = 'e';

    size_t found = str.find_last_of(ch);

    if(found != string::npos)
        cout << endl << "Specified character is not found in the strnig.";
    else
        cout << endl << "Specified character is found at : " << found;
        
    return 0;
}