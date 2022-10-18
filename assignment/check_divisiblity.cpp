#include <iostream>

using namespace std;

// check a is divible by b or not
bool isDivisible(int a, int b){
    if(a % b == 0)
        return true;
    else
        return false;
}

// check input is valid or not
bool isValidNumber(int number) {
    if(number == 0)
        return false;
    else
        return true;
}

int main() {
    double first, second; // declare to store input
    system("cls"); // to clear screen
    cout << endl << "Enter first integer : ";
    cin >> first;

    if(!isValidNumber(first))
        cout << endl << "Invalid input";
    else{
        cout << endl << "Enter second integer : "; 
        cin >> second;

        if(!isValidNumber(second))
            cout << endl << " second input is Invalid";
        else{
            if(isDivisible(first, second)){
                cout << endl << first << " is divisible by " << second;
            }
            else {
                cout << endl << first << " is not divisible by " << second;
            }
        }
    }
    return EXIT_SUCCESS;
}
