// In the IDE of your choice, write a C or C++ program that implements the following algorithm:

 

// 1. TriangleArea with base, height and area.

// 2. Set base to a user-entered value.

// 3. Set height to a user-entered value.

// 4. Set area to the value of 0.5 * base * height.

// 5. Display the value of area.

// 6. Stop.


#include <iostream>
using namespace std;

int main() {

double base, height, area;

cout << "Please enter a number for the base:" << endl;
cin >> base;
cout << "Please enter a number for the height:" << endl;
cin >> height;

area = (0.5) * base * height;

cout << "The area of the triangle is: " << area << "." << endl;

}