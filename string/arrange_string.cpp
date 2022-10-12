#include <iostream>
#include <string>

using namespace std;

int main() {
    string record[] = {"subodh", "anup", "rahul", "komal", "priyanka", "sushant", "bankar"};

    int len = record->length() + 1;
    cout << endl << "List of student before sorting => ";
    for(auto s: record)
        cout << endl << s;

    // logic for sorting
    for(int i = 0; i < len; ++i){
        for(int j = i+1; j < len; ++j){
            string temp; 
            if((record[i].compare(record[j]))>0){
                // swap the string
                swap(record[i], record[j]); // swap the value of two string.
            }
        }
    }

    cout << endl << endl << "List of student after sorting => ";
    for(auto s : record) 
        cout << endl << s;

    return 0;
}