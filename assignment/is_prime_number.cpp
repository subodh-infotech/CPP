#include <iostream>

using namespace std;

// check prime number
bool isPrimeNumber(int number)
{
    int divider = 2; // to check number is divible or not
    bool flag = true; // to check the status of number
    
    // check if number is zero or one
    if(number ==0 || number ==1)
    {
        flag = false; // because, 0 and 1 are not prime number
    }
    else
    {
        while(divider <= number/2)
        {
            // if number is divisible by divider 
            // set flag = false and break the loop
            // because, number is not prime
            if(number % divider == 0)
            {
                flag = false;
                break;
            }
            else
            {
                // if number is not divisible by divider
                // then checked by next divider number
                divider++;
            }

        }
    }

    return flag;
}

int main()
{
    int num; // declare to store input value

    system("cls"); // clear screen

    cout << endl << "Enter integer to check prime number : ";
    cin >> num;

    // check number is prime or not 
    // and display result
    if(isPrimeNumber(num))
        cout << endl << num << " is prime number";
    else 
        cout << endl << num << " is not prime number";
    return 0;
}