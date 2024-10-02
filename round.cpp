/*
Take a nearest integer which divides by y,x=13,y=3

https://www.youtube.com/watch?v=TRF2atyS1QE&list=PLravv7D3PJJaBJ9uSBVGcWA79pdRN7AOm&index=11

*/

#include <iostream>
using namespace std;

int customRound(double number) {
    int integerPart = (int) number;
    double decimalPart = number - integerPart;

    if (decimalPart >= 0.5) {
        return integerPart + 1;
    } else {
        return integerPart;
    }
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    double nearest = (double) x / y;
    int roundedNumber = customRound(nearest);
    cout << roundedNumber * y << endl;

    return 0;
}