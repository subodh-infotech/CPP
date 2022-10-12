/*
this program calculate the sum of all substring of string representing a number.
for example - 
string input = "1234"
sum of all possible subtring like - 
1 + 12 + 123 + 1234 + 2 + 23 + 234 + 3 + 34 + 4 = 1670
output = 1670

*/
#include <iostream>
#include <string>

using namespace std;

int sumSubstring(string str){
    int sum = 0;
    for(int i = 0; i < str.length(); ++i){
        for(int j = 1; j <= str.length()-i; ++j){
            // string to int
            // add numbers to sum variable
            sum = sum + stoi(str.substr(i, j));
        }
    }

    return sum;
}

int main(){
    string inputString = "1234";
    cout << endl << "input string : " << inputString;
    cout << endl << "Sum of all substring : " << sumSubstring(inputString);
    return EXIT_SUCCESS;
}