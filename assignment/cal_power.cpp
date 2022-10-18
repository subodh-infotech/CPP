#include <iostream>

using namespace std;

double calculatePower(double base, int power){
    if(power == 0){
        return 1;
    }
    else {
        double result = 1;
        while(power >=1){
            result = result * base;
            power--;
        }

        return result;
    }
}


int main() {
    double base, power; // declare to store base and power input value

    system("cls");

    cout << endl << "Enter integer as base value : ";
    cin >> base;

    cout << endl << "Enter integer as power value : ";
    cin >> power;

    double result = calculatePower(base, power);
    cout << endl << "Base : " << base;
    cout << endl << "Power : " << power;
    cout << endl << "Result : " << result;
    cout << endl;

    return 0;
}