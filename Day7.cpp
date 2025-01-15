#include <iostream>
using namespace std;

int addition(int a, int b) {
    int sum = a + b;
    return sum;
}

int substraction(int a, int b) {
    int difference = a - b;
    return difference;
}

int multiplication(int a, int b) {
    int product = a * b;
    return product;
}

int division(int a, int b) {
    int quotient = a / b;
    return quotient;
}

int main() {
    cout << "Menu Calculator" << endl;
    cout << "---------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int menuChoice;
    int a;
    int b;

    cout << "Please enter a selection: ";
    cin >> menuChoice;

    bool isTrue = true;

    while (isTrue == true) {
    if (menuChoice == 1) {
        cout << "Please enter two numbers:" << endl;
        cin >> a >> b;
        int sum = addition(a, b);
        cout << "The sum is: " << sum << endl;
        isTrue = false;
    }
    else if (menuChoice == 2) {
        cout << "Please enter two numbers:" << endl;
        cin >> a >> b;
        int difference = substraction(a, b);
        cout << "The difference is: " << difference << endl;
        isTrue = false;
    } 
    else if (menuChoice == 3) {
        cout << "Please enter two numbers:" << endl;
        cin >> a >> b;
        int product = multiplication(a, b);
        cout << "The product is: " << product << endl;
        isTrue = false;
    }
    else if (menuChoice == 4) {
        cout << "Please enter two numbers:" << endl;
        cin >> a >> b;
        int quotient = division(a, b);
        cout << "The quotient is: " << quotient << endl;
        isTrue = false;
    }
    else {
        cout << "Incorrect input, please try again." << endl;
        cin >> menuChoice;
    }
    }

}