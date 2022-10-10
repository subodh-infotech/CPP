#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string sentence = "C++ is popular computer programming language It is one of the most popular programming language C++ language is first choice for software developers";
    string candidateString;
    int i = 10;
    cout << endl << "Enter any string ==> ";
    getline(cin, candidateString);
   
    string stringPattern = "\\b"+candidateString+"\\b";
    regex pattern(stringPattern);
    int count =0;
    auto it = regex_iterator<string::iterator>(sentence.begin(), sentence.end(), pattern);
    auto end = regex_iterator<string::iterator>();

    count = distance(it, end);
    // another way for occurance a word
    // while( it != regex_iterator<string::iterator>()) {
    //     count++;
    //     it++;
    // }

    cout << endl << "total number of occurence : " << count;
    return 0;
}