#include <iostream>
#include <regex>

using namespace std;

int main() {
    string email;
    cout << endl << "enter you email --> " ;
    cin >> email;

    regex pattern("[a-zA-Z0-9_]+@[a-zA-Z]+\\.com");
    if(regex_match(email,pattern)){
        cout << endl << "Valid email";
    }
    else {
        cout << endl << "Invalid email";
    }

    return 0;
}