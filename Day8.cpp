#include <iostream>
using namespace std;

int addition(int a, int b) {
    int sum = a + b;
    return sum;
}

int subtraction(int a, int b) {
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
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int menuChoice;
    int a;
    int b;

    cout << "Please enter a selection: ";
    cin >> menuChoice;

    switch(menuChoice) {
        case 1: {
            cout << "Please enter two numbers:" << endl;
            cin >> a >> b;
            int sum = addition(a, b);
            cout << "The sum is: " << sum << endl;
            break;
        }
        case 2: {
            cout << "Please enter two numbers:" << endl;
            cin >> a >> b;
            int difference = subtraction(a, b);
            cout << "The difference is: " << difference << endl;
            break;
        }
        case 3: {
            cout << "Please enter two numbers:" << endl;
            cin >> a >> b;
            int product = multiplication(a, b);
            cout << "The product is: " << product << endl;
            break;
        }
        case 4: {
            cout << "Please enter two numbers:" << endl;
            cin >> a >> b;
            int quotient = division(a, b);
            cout << "The quotient is: " << quotient << endl;
            break;
        }
        default: {
            cout << "Invalid." << endl;
        }
    }

    return 0;

}