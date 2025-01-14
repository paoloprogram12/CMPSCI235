#include <iostream>
using namespace std;

void questionTwo() {
    double celsius;

    cout << "Enter the temperature in degrees Celsius." << endl;
    cin >> celsius;

    double fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    cout << "The temperature in fahrenheit is: " << fahrenheit << "." << endl;
}

void questionFour() {
    double miles;
    double gas;
    double mpg;

    cout << "Enter the miles driven. " << endl;
    cin >> miles;
    cout << "Enter the gallons of gas used. " << endl;
    cin >> gas;

    mpg = (miles / gas);

    cout << "The mpg is: " << mpg << "." << endl;

}

int main() {

    int selection;

    cout << "Which question would you like to see?" << endl;
    cin >> selection;

    bool verify = true;

    while (verify) {

    if (selection == 2) {
        questionTwo();
        verify = false;
    }
    else if (selection == 4) {
        questionFour();
        verify = false;
    }
    else {
        cout << "Incorrect input, try again." << endl;
        cin >> selection;
    }
    }
}