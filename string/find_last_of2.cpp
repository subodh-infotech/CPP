#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("Welcome to GeeksforGeeks!"); 
    char ch = 'e';
    size_t found;
    int pos = 10;

    found = str.find_last_of(ch, pos); // here, we will get the index of last occurence in str after index 10.
    
    if(found == string::npos) 
        cout << endl << "specified character not found in the string";
    else
        cout << endl << "specified character found at position : " << found;
    return 0;
}