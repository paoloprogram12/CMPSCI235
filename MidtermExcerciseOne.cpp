#include <iostream>
using namespace std;

int main() {

    int numOne, numTwo, numThree;

    cout << "Enter three numbers:" << endl;
    cin >> numOne >> numTwo >> numThree;

    if ((numOne > numTwo) && (numOne > numThree)) {
        if (numTwo > numThree) {
            cout << numThree << " " << numTwo << " " << numOne << endl;
        }
        else if (numThree > numTwo) {
            cout << numTwo << " " << numThree << " " << numOne << endl;
        }
    }
    else if ((numTwo > numOne) && (numTwo > numThree)) {
        if (numOne > numThree) {
            cout << numThree << " " << numOne << " " << numTwo << endl;
        }
        else if (numThree > numOne) {
            cout << numOne << " " << numThree << " " << numTwo << endl;
        }
    }
    else if ((numThree > numOne) && (numThree > numTwo)) {
        if (numOne > numTwo) {
            cout << numTwo << " " << numOne << " " << numThree << endl;
        }
        else if (numTwo > numOne) {
            cout << numOne << " " << numTwo << " " << numThree << endl;
        }
    }

    return 0;

}