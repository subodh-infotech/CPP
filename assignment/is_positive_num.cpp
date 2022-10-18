#include <iostream>

using namespace std;

bool isPositiveNumber(int number){
    if(number >0) 
        return true;
    else
        return false;
}

int main() {
    system("cls"); // to clear screen
    int num; // declare varaible to store input value

    cout << endl << "Enter integer to check positive or not : ";
    cin >> num;

    if(num == 0){
        cout << endl << "not valid input";       
    }
    else{
        if(isPositiveNumber(num))
            cout << endl << "Input number is positive";
        else
            cout << endl << "Input number is not positive";
    }

    return 0;
}