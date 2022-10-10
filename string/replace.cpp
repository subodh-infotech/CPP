#include <iostream>
#include <string>

using namespace std;

void stringProcess() {
    string name = "Niels Stroustrup";
    string s = name.substr(6, 10); // substr() method returns new string from index 6 to total number of character is 10 in existing string.
    cout << endl << "s => " << s;
    name.replace(0,5,"nicholas"); // this method replace the string from index 0 to length 5 by "nicholas".
    cout << endl << "name : " << name;
    name[0] = toupper(name[0]); // toupper method return specified character in upper case.
    cout << endl << "Modified name : " << name;
}

int main() {
    stringProcess();
    return 0;
}
