// Heron’s formula for the area, 
// A, of a triangle with sides of length a, b, and c is 
// A = √[s(s - a)(s - b)(s - c)] where
// s = (a + b + c) / 2
// 2
// Write, test, and execute a function that accepts the values of a, b, and c
// as parameters from a calling function, and then calculates the values of s
// and [s(s - a)(s - b)(s - c)]. If this quantity is positive, the function 
// calculates A. If the quantity is negative, a, b, and c do not form a triangle, 
// and the function should set A = -1. The value of A should be returned by the function.


#include <iostream>
using namespace std;

double heron(double, double, double);

int main() {

    double a;
    double b;
    double c;

    cout << "Enter three numbers:" << endl;
    cin >> a >> b >> c;

    double area = heron(a, b, c);
    cout << "The answer is: " << area;

    return 0;

}

double heron(double a, double b, double c) {

    double s = (a + b + c) / 2;
    double insideArea = s * (s - a) * (s - b) * (s - c);
    double area;

    if (insideArea > 0) {
        area = sqrt(insideArea);
    }
    else {
        area = -1;
    }

    return area;

}