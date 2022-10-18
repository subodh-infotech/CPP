#include <iostream>

using namespace std;

bool isEven(int number) {
    if(number % 2 ==0 )
        return true;
    else
        return false;
}

int main() {
    int number;

    system("cls");
    cout << endl << "Enter any integer => " ;
    cin >> number;

    if(isEven(number)) {
        cout << endl << "Input number is even number";
    }
    else {
        cout << endl << "Input number is not even number";
    }

    return 0;
}