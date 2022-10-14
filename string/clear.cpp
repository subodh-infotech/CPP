#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("welcome");
    cout << "\nString : " << str;

    // use of clear function
    str.clear();
    cout << endl << "string after using clear method => " << str;
    return 0;
}