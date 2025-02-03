// A formula to raise a real number, a, to the real power,
//  b, is given by the formula a^b = e^[b × ln(a)]
// where a must be positive and b must be positive
//  or 0. Using this formula, write a function named power() that accepts a and b as real values and returns a^b.

#include <iostream>
#include <cmath>
using namespace std;

double power(double, double);

int main() {

    double a, b;

    cout << "Enter two positive numbers: " << endl;
    cin >> a >> b;

    while ((a <= 0) || (b < 0)) {
        if (a <= 0) {
            cout << "Enter another number for a" << endl;
            cin >> a;
        }
        else if (b < 0) {
            cout << "Enter another number for b" << endl;
            cin >> b;
        }
    }

    double formula = power(a, b);

    cout << "The answer to the formula is: " << formula << endl;

    return 0;

}

double power(double a, double b) {

    const double euler = exp(1.0);
    double eulerExponent = b * log(a);
    double aPowB = pow(euler, eulerExponent);

    return aPowB;

}