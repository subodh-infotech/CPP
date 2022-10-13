/*
    this program replace the characters from specified position of the string to specified number of character with another specified string.
    following is the syntax of replace method.
    
    str1.replace(position, length, str2);

    this function does not return any value.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString = "This is c language";
    cout << endl << "String before replacing => " << inputString;
    string str2("C++"); // declare string to replace in inputstring
    inputString.replace(8, 1, str2); // replace method replace character from index 8 in inputString, total one character is replaced with string str2's value.
    cout << endl << "String after replacing => " << inputString;
    
    return 0;
}