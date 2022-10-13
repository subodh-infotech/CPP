/*
    find_first_not_of() -> this method is used to find the first character from specified string as argument is not match in a string.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("Hello world");

    size_t found = str.find_first_not_of("geeksforgeeks");

    cout << endl << "first unmatch character : " << str[found];

    return 0;
}
/*
    in this example we will get 'H' character which is the first character that does not match string "geeksforgeeks";
*/