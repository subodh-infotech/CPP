#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("javatpoint");
    string str2;
    str2.assign(str); // here, value of str is assigned to str2
    cout << endl << str2;
    return 0;
}