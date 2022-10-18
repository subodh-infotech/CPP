#include <iostream>

using namespace std;

void evenNumber(int number) {
    for(int i = 2; i <= (number*2); i = i+2) {
        cout << endl << i;
    }
}

int main() {
    int num;

    system("cls");
    cout << endl << "Enter integer : ";
    cin >> num;

    if(num <=0 ) {
        cout << endl << "Invalid input";
    }
    else {
        evenNumber(num);
    }

    return 0;
}