#include <iostream>
using namespace std;

int main() {
    int numOne, numTwo, numThree, avg;
    cout << "Enter three numbers:" << endl;
    cin >> numOne;
    cin >> numTwo;
    cin >> numThree;
    avg = (numOne + numTwo + numThree) / 3;
    cout << "The average is: " << avg << "." << endl;
    
}