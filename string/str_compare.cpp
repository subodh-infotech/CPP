#include <iostream>
#include <string>

using namespace std;

/*
compare() -> it is used to compare two string and return int value as shown in the following example.
if k = 0 :-> both strings are equal.
if k > 0 :-> str1 is greater string with compare to str1.
if k < 0 :-> str1 is smaller string with compare to str2.
*/
int main() {
    string str1 = "Subodh";
    string str2 = "Shilpa";
    int k = str1.compare(str2);

    if(k == 0)
        cout << endl << "Both string are equal";
    else if(k >0)
        cout << endl << str1 << " is greater than string " << str2;
    else
        cout << endl << str1 << " is smaller than string " << str2;
         
    return 0;
}