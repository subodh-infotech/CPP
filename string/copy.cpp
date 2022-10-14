/*
    copy() -> this method is used to copy the character into character array from specified string.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string source("javatpoint tutorial");
    char destination[20];
    cout << endl << "source string => " << source;
    source.copy(destination, sizeof source);
    cout << endl << "destination string => " << destination;
    return 0;
}