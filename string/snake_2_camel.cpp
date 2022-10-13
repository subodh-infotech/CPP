
/*
    this program convert snake case string to camel case string.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input("interest_rate INTEREST_RATE increase_count_by_one find_all_users ");
    size_t found = input.find_first_of("_");
    
    while(found != string::npos) {
        input[found] = toupper(input[found+1]);
        input.replace(found+1, 1, "");
        found = input.find_first_of("_", found+1);
    }

    cout << endl << "Modified string : " << input;
    return 0;
}