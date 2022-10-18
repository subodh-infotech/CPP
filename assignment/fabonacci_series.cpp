#include <iostream>
#include <iomanip>

using namespace std;

void displayFabonacciSeries(int term) {
    int x = -1;
    int y = 1;

    for(int i = 1; i <= term; ++i) {
        int result = x + y;
        cout << setw(5) << result;
        x = y;
        y = result;
    }
}

int main() {
    int term;

    system("cls");
    cout << endl << "Enter integer : ";
    cin >> term;

    if(term <= 0){
        cout << endl << "Invalid input";
    }
    else{
        displayFabonacciSeries(term);
    }

    return 0;
}