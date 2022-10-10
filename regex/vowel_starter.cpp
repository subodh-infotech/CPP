#include <iostream>
#include <regex>
#include <vector>
#include <map>

using namespace std;

void countVowel(string sent) {
	char vowel[5]{'a', 'e', 'i', 'o', 'u'};
	map<char, vector<string>> words;
	
	for(int i = 0; i < 5; ++i) {
		string stringPattern = "\\b(";
		stringPattern.push_back(vowel[i]);
		stringPattern = stringPattern + ")([^ ]*)\\b";
		regex pattern(stringPattern, regex::icase);

		sregex_iterator rit(sent.begin(), sent.end(), pattern);
		sregex_iterator rend;

		while(rit != rend){
			words[toupper(vowel[i])].push_back(rit->str());
			rit++;
		}
		
	}
	
	for(auto word : words) 
	{
		cout << endl << word.first;
		vector<string> temp = word.second;
		for(auto s : temp) 
		{
			cout << "---> " << s;
		}
	}
	
}

int main() {
	string s = "C++ is an An object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering  english umbrella eat uncle elephant unit ";
	countVowel(s);
	return 0;
}