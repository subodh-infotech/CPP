#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Mango is my favorite ";
    string str2 = "fruit";
    cout << endl << "Original string : " << str1;
    str1.append(str2, 0, 5);
    cout << endl << "After appending string : " << str1;

    return 0;
}
