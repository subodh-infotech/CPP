#include <iostream>
#include <string>

using namespace std;

bool is_odd_number(int number){
    if(number % 2 != 0) // check number is odd
        return true;
    else
        return false;
}

bool chekNumber(int number){
    if(number == 0)
        return true;
    else
        return false;
}

int main() {
    system("cls"); // clear
    int number; // declare to accept input

    cout << endl << "Enter integer to check odd number : ";
    cin >> number;

    if(chekNumber(number)){
        cout << endl << "Invalid input";
    }
    else {
        if(is_odd_number(number))
            cout << endl << " input value is odd number";
        else
            cout << endl << "input value is not odd number";
    }

    return 0;
}