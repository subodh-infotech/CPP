#include <iostream>

using namespace std;

// check number is negative or no
bool isNegativeNumber(int number){
    if(number < 0)
        return true;
    else
        return false;
}

// check input is valid or no
bool isValidInput(int number)
{
    if(number == 0)
        return false;
    else
        return true;
}

int main()
{
    system("cls"); // clear screen
    
    int number; // declare to store input value

    cout << endl << "Enter integer to check negative or not : ";
    cin >> number;

    if(isValidInput(number))
    {
        if(isNegativeNumber(number))
        {
            cout << endl << number << " is negetive number.";
        }
        else
        {
            cout << endl << number << " is not negative number.";
        }
    }
    else
    {
        cout << endl << "Invalid Input !!";
    }


    return 0;
}