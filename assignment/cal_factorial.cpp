#include <iostream>

using namespace std;

double calculateFactorial(int number){
    if(number == 0)
        return 1;
    else {
        double fact = 1;
        int i = 1;
        while(i <= abs(number)) {
            fact = fact * i;
            i++;
        }

        return fact;
    }
}

bool isValidInput(double number) {
    if(number < 0) 
        return false;
    else
        return true;
}

int main() {
    int num;

    system("cls");
    cout << endl << "Enter any integer to calculate factorial : ";
    cin >> num;

    if(!isValidInput(num)){
        cout << endl << "Invalid input !";
    }
    else {
        double factorial = calculateFactorial(num);    
        cout << endl << "Factorial of " << num << " : " << factorial ;
        cout << endl ;
    }
    
    return 0;
}