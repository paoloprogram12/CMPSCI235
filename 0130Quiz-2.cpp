// In the text box below, write a function 
// named findMax() that accepts three double-precision 
// numbers as parameters, finds the largest of the three 
// inputs, and returns the largest of the three inputs.  (5 points)

#include <iostream>
using namespace std;

double findMax(double, double, double);

int main() {

    double numOne, numTwo, numThree;

    cout << "Enter 3 numbers:" << endl;
    cin >> numOne >> numTwo >> numThree;

    double maxNum = findMax(numOne, numTwo, numThree);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;

}

double findMax(double numOne, double numTwo, double numThree) {

    double n1 = numOne;
    double n2 = numTwo;
    double n3 = numThree;

    double maxNum;

    if ((n1 > n2) && (n1 > n3)) { // n1
        maxNum = n1;
    }
    else if ((n2 > n1) && (n2 > n3)) { // n2
        maxNum = n2;
    }
    else if ((n3 > n1) && (n3 > n2)) { // n3
        maxNum = n3;
    }

    return maxNum;
}