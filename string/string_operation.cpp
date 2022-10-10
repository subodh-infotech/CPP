#include <iostream>

using namespace std;

int main() {
    string s1 = "subodh";
    string s2 = "kumar";

    if(s1 == s2)
    {
        cout << endl << "Both string are equal";
    }
    else 
    {
        cout << endl << "Both string are not equal !";
    }

    if(s1 > s2) {
        cout << endl << s1 << " is greatter than " << s2;
    }
    else {
        cout << endl << s2 << " is greater than " << s1;
    }

    
    return EXIT_SUCCESS;
}