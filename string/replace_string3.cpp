#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "this is C++ language";
    
    cout << endl << "String before replacing => " << str1;
    str1.replace(8,3,"C##",2); // this method replace 'C++' with 'C#' only because, we specified only 2 characters are used for replacing ("C##",2);
    cout << endl << "String after replacing => " << str1;

    return 0;
}