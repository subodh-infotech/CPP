
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("C++ is a language");
    string str2("Programming ");
    cout << endl << "Original string ; " << str;
    str.insert(9, str2, 0, 4);
    cout << endl << "modified string :" << str; // C++ is a Proglanguage
    str.insert(9,str2, 0, 11);
    cout << endl << "Modified string : " << str; // C++ is a Programming Proglanguage.
    return 0;
}