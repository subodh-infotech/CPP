#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Welcome";

    for(int i=0; i<str1.length(); ++i) {
        cout << endl << str1[i] << "--> " << i;
    }
    
    return 0;
}