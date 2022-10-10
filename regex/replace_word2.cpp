#include <iostream>
#include <regex>

using namespace std;

int main() {
    string sent = "this subject has a submarine as a subsequence";
    string stringPattern = "\\b(sub)([^ ]*)\\b";
    regex pattern(stringPattern);

    sregex_iterator rit(sent.begin(), sent.end(), pattern);
    sregex_iterator rend;

    string result;
    while(rit != rend) {
        sent = regex_replace(sent, pattern, "X");        
        rit++;
    }
   
    cout << endl << "Result ===> " << sent;
  
    return 0;
}