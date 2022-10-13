#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1("geeKsforgeeks");
    string str2("GeeksforGeeks");

    size_t found = str1.find_first_not_of(str2,3);

    cout << endl << "first unmatch character : " << str1[found];
    return 0;
}