//  Write a function that calculates the area, a, of a circle when 
// its circumference, c, is given. This function should call a second 
// function that returns the radius, r, of the circle, given c. 
// The relevant formulas are r = c / 2π and a = πr2.
// b. Write a C++ program that accepts the value of the circumference 
// from the user, calculates
// the radius and area, and displays the calculated values. 
// Your program should use the func- tions written for Exercise 1a.


#include <iostream>
#include <cmath>
using namespace std;

const double pi = M_PI;
double areaOfCircle(double);
double getRadius(double);

int main() {

    double circumference;
    double area;

    cout << "Enter a circumference:" << endl;
    cin >> circumference;

    area = areaOfCircle(circumference);

    cout << "The area is: " << area << endl;



    return 0;

}

double areaOfCircle(double circumference) {

    double radius = getRadius(circumference);
    double area = pi * pow(radius, 2);
    return area;

}

double getRadius(double circumference) {

    double radius = circumference / (2 * pi);
    return radius;

}