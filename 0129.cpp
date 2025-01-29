#include <iostream>
using namespace std;

double addFractions(double, double, double, double);
double fractionConvert(double, double);
double multiplyFraction(double, double, double, double);

int main() {

    char* userChoice;

    cout << "A. Add two fractions" << endl;
    cout << "B. Convert a fraction to decimal" << endl;
    cout << "C. Multiply two fractions" << endl;
    cout << "D. Quit" << endl;
    cout << "Enter your selection: " << endl;
    cin >> userChoice;

    return 0;

    if (userChoice == "A") {
        addFractions(2.0, 5.0, 3.0, 4.0);
    }
    else if (userChoice == "B") {
        fractionConvert(2.0, 5.0);
    }
    else if (userChoice == "C") {
        multiplyFraction(2.0, 5.0, 3.0, 4.0);
    }
    else if (userChoice == "Q") {
        cout << "Bye." << endl;
    }

}

double addFractions (double n1, double d1, double n2, double d2) {
    double sum = ((n1 / d1) + (n2 / d2));
    return sum;
}

double fractionConvert (double n1, double n2) {
    double quotient = n1 / n2;
    return quotient;
}

double multiplyFraction (double n1, double d1, double n2, double d2) {
    double numOne = n1 / d1;
    double numTwo = n2 / d2;
    double product = numOne * numTwo;
    return product;
}