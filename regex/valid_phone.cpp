#include <iostream>
#include <regex>

using namespace std;

int main() {
    string phone;
    cout << endl << "Enter phone number : ";
    cin >> phone;

    const regex pattern("(0|91)?[6-9][0-9]{9}");

    if(regex_match(phone, pattern)) {
        cout << endl << "Valid phone number";
    }
    else {
        cout << endl << "Invalid phone number";
    }
    
    return 0;
}