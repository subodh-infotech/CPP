/*
    find_first_of() -> this method is used to find the fist occurence of the character by specified string. 
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "It replaces the vowels in this sentence by astrisks.";
    cout << endl << "string ==> " << str;
    size_t found = str.find_first_of("aeiou"); // size_t is unsigned int data type.
    
    // replace each vowel from string with '*'
    while(found != string::npos) {
        str[found] = '*';
        found = str.find_first_of("aeiou", found+1);
    }

    cout << endl << "final output => " << str;
    return 0;
}