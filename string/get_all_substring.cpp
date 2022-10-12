/*
this program display the all possible sub-string from given string as input.
--------------------------------------------------------------------------------

NOTE :- substring can be of any length but the characters need to be in order. We can not skip any character in between while choosing the sub-string from given string. 
for exampe - 
sub-string of string 'SUN' are :- S, U, N, SU, UN, SUN
*/
#include <iostream>
#include <string>

using namespace std;

void displayAllSubstring(string str) {
    for(int i = 0; i < str.length(); ++i){
        for(int j = 1; j <= str.length()-i; ++j){
            string substring = str.substr(i, j);
            cout << endl << substring;
        }
    }
}

int main() {
    string str = "abc"; // declare string object initialized
    displayAllSubstring(str); // call method to display all possible sub-string
    return 0;
}

/*
out of above program - 
a
ab
abc
b
bc
c
*/