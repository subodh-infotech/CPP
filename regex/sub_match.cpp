#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string sentence = "this subject has a submarine as a subsequence";
    string candidateString;
   
    regex pattern("\\b(sub)([^ ]*)\\b");

    // regex_iterator<string::iterator> = sregex_iterator
    sregex_iterator rit(sentence.begin(), sentence.end(), pattern);
    sregex_iterator rend;

    while(rit != rend) {
        cout << endl << rit->str() << "-----" << rit->position();
        rit++;
    }

    return 0;
}