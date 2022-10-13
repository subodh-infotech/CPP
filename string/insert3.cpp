#include <iostream>
#include<string>

using namespace std;

int main() {
    string str("Maths is  favourite subject");
    cout << endl << "original string : " << str;
    str.insert(9, "my", 2);
    cout << endl << "modified string => " << str;
    return 0;
}