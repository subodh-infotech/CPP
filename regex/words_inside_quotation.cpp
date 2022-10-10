#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "welcome to \"java\" language. \"python\" is also popular language.";
    regex pattern("\"(\\w+)\"");
    smatch match;
    
    sregex_iterator rit(str.begin(), str.end(), pattern);
    sregex_iterator rend;

    while(rit != rend) {
        cout << endl << rit->str(1);
        rit++;
    }

    return 0;
}