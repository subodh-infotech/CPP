#include <iostream>
#include <regex>

using namespace std;

int main() {
    string sent = "this subject has a submarine as a subsequence";
    regex pattern("subsequence");

    string userInput = "sequence";
    string res = regex_replace(sent, pattern, userInput);
    cout << endl << res;

    // another way 
    string result;
    regex_replace(back_inserter(result), sent.begin(), sent.end(), pattern, "subsequence");
    cout << endl << "new result : " << result;
    return 0;
}