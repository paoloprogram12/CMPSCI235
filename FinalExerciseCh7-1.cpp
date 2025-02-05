// Write a C++ program that reads a list of double-precision grades from
// the key- board into an array named grade. The grades are to be counted
// as they’re read, and entry is to be terminated when a negative value has 
// been entered. After all grades have been input, your program should find 
// and display the sum and average of the grades. The grades should then be 
// listed with an asterisk (*) placed in front of each grade that’s below the average.
// b. Extend the program written for Exercise 1a to display each grade and its 
// letter equivalent, using the following scale:
// Between 90 and 100 = A
// Greater than or equal to 80 and less than 90 = B 
// Greater than or equal to 70 and less than 80 = C 
// Greater than or equal to 60 and less than 70 = D 
// Less than 60 = F

#include <iostream>
using namespace std;

int main() {

    const int SIZE = 100;
    double grades[SIZE];
    double grade;
    int count = 0;
    double sum = 0;

    cout << "Enter a grade: " << endl;

    while (true) {
        if (grade < 0) {
            break;
        }
        else {
            grades[count] = grade;
            count++;
            sum += grade;
        }
    }

}