#include <iostream>
#include <regex>

using namespace std;

int main() 
{
	string sentence = "pad kid poured curd pulled cod"; // declare string variable and initialized
	
	string stringPattern = "\\b(p)([^ ]*)\\b"; // string pattern 
	regex pattern(stringPattern); // create pattern for regular expression
	
	regex_iterator<string::iterator> rit(sentence.begin(), sentence.end(), pattern);
	regex_iterator<string::iterator> rend;
	
	cout << endl << "total number of words start with 'p' : " << distance(rit, rend);
	
	cout << endl << "String ===> " << sentence;
	
	while(rit != rend) {
		cout << endl << rit->str();
		rit++;
	}
	
	return 0;
}