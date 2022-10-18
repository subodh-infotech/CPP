#include <iostream>

using namespace std;

void naturalNumber(int number) {
    for(int i = 1; i <= number; ++i){
        cout << endl << i;
    }
}

int main() {
    int num;
    system("cls");
    cout << endl << "Enter integer => ";
    cin >> num;

    if(num <=0){
        cout << endl << "Invalid input";
    }
    else {
        naturalNumber(num);
    }
    
    return 0;
}