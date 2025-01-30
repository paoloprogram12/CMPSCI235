// In the text box below, write a function named findAbs() 
// that accepts a double-precision number passed to it, computes 
// its absolute value, and returns the absolute value.  
// A number's absolute value is the number itself if the number 
// is positive and the negative of the number it the number is
//  negative. (5 points)

#include <iostream>
#include <cmath>
using namespace std;

double findAbs(double);

int main() {

double userNum;

cout << "Enter a number: " << endl;
cin >> userNum;

double absNum = findAbs(userNum);

cout << "The absolute value is: " << absNum << endl;

return 0;

}

double findAbs(double userNum) {

    double absNum;
    double input = userNum;

if (input >= 0) {
absNum = userNum;
}
else {
absNum = userNum * (-1);
}

    return absNum;
}