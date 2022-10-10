#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "C++ is most popular language. C++ has many unique features. C++ is evergreen language. C++ is most useful programming language. C++ is general purpose language.";
    regex pattern("C\\+\\+");

    sregex_iterator rit(str.begin(), str.end(), pattern);
    sregex_iterator rend;

    while(rit != rend) {
        str = regex_replace(str, pattern, "Java");
        rit++;
    }

    cout << endl << "final result ==> " << str;
    return 0;
}