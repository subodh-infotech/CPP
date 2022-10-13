/*
    this program replace the number of character from specified position of string with character specified number of character from specified position of second string.
    for example - 
    str1 = "this is C Programming language";
    str2 = "java language";
    str1.replace(8, 1, str2, 0, 4);  -> in this statement replace method replace the character 'C' from str1 with str2 and total 4 characters are used to from index 0 to replace 'C'.
    we will get output as below - 

    this is java Programming language

    i.e. 
    'C' is replaced with 'java'.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString = "This is C programming language";
    string str2 = "java language";

    cout << endl << "String before replacing ==> " << inputString;

    inputString.replace(8, 1, str2, 0, 4);

    cout << endl << "string after replacing ==> " << inputString;
    return 0;
}