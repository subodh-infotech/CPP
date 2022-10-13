#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "kashmir is the nature ";
    string str2 = "of beauty";

    cout << endl << "Original string ==> " << str1;
    str1.append("of beauty", 9);
    cout << endl << "after appending string ==> " << str1;

    return 0;
}