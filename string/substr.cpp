#include <iostream>
#include <string>

using namespace std;
/*
    substr() -> It is in-build function available in string header file. this method takes two arguments and return new constructed string object with its value initialized to a copy of sub-string of this object. following is the syntax of substr().
    
    substr(int position, int no_of_character/length);

    where,
    position -> this parameter defines the position of character from where to be copied as sub-string. 
    length -> this parameter defines number of character to be copied as sub-string.
    Note -> character of 'position' also be included.

    following are some important points:-
    1. if position is equal to the string length the this method return empty strin object.
    2. if position is greater than the string length then this method throw an error 'out_of_range'
    3. if the 'length' is greater than the size of string then this method returned sub-string as [position, size()]
    4. if 'length' is not passed as the argument to this method then it returned sub-string is [posision, size()]
    5. if 'position' is in negative then this method throw an error 'out_of_range'
    6. if 'length' is equal to zero then this method returns empty string object.
    7. if 'length' is in negative then this method returned sub-string is [position, size()]
*/

int main() {
    string str = "Computer";
    // if position is equal to zero
    cout << endl << str.substr(0, 6); // Comput

    // if position is equal to size of string
    cout << endl << "new string : " << str.substr(str.length(), str.length()); // get empty string

    // if length is passed as 0 
    cout << endl << "modified result : " << str.substr(1, 0); // get empty string

    // if second argument is not passes
    cout << endl << "modified result : " << str.substr(0); // Compter

    // if second argument is in negative
    cout << endl << "modified result : " << str.substr(0, -1); // Computer
    
    return 0;
}