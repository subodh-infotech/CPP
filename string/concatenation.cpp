#include <iostream>

using namespace std;
string concate(string &name, string &domain) {
    return name+"@"+domain;
}

string concate2(string &s1, string &s2) {
   return s1 += s2;
}

int main(){
    string username = "subodhkr069";
    string domain = "gmail.com";
    cout << endl << concate(username, domain);
    cout << endl << "----";
    cout << endl << concate2(username, domain);
    return 0;
}