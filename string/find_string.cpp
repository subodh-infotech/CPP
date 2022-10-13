#include <iostream>
#include<string>

using namespace std;

int main() {
    string str("welcome to javatpoint");
    cout << endl << "index of first occurenct 't' : " << str.find('t');

    cout << endl << "first position of 'to' : " << str.find("to");

    cout << endl << "position of 'p' : " << str.find('p', 6);

    cout << endl << "position of 'x' : " << str.find('x');

    
    
    return 0;
}