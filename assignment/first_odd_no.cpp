#include <iostream>

using namespace std;

void oddNumber(int number) {
    for(int i = 1; i < (number*2); i = i+2){
        cout << endl << i;
    }
}

int main() {
    int num;

    system("cls");
    cout << endl << "Enter integer : ";
    cin >> num;

    if(num <=0){
        cout << endl << "Invalid input";
    }
    else {
        oddNumber(num);
    }

    return 0;
}