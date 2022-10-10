#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "alter, abroad, abacist, academic, abaciscus, allow, actual, abalone, baseball, abandoned, rice, four, moon, flour";
    regex pattern("\\b\\w{5,8}\\b");

    sregex_iterator rit(str.begin(), str.end(), pattern);
    sregex_iterator rend;

    while(rit != rend) {
        cout << endl << rit->str();
        rit++;
    }

    return 0;
}