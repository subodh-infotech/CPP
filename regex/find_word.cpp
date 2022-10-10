#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string sentence = "this subject has a submarine as a subsequence";
    string inputString;
    cout << endl << "Enter any string ==> ";
    getline(cin, inputString);

    string stringPattern = "\\b"+inputString+"\\b";
    regex pattern(stringPattern);

    if(regex_search(sentence, pattern)) 
        cout << endl << "string found !";
    else
        cout << endl << "string not found !";
        
    return 0;
}