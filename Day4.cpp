#include <iostream>
using namespace std;

int main() {
    double base = 1.0, height = 1.5;
    double area = (1.0/2.0) * (base * height);
    cout << "The area is: " << area << " inches squared" << endl;

    double distance = 183.67, speed = 58.0;
    double time = distance / speed;
    cout << "The elapsed time to travel " << distance << " miles is " << time << endl;
}