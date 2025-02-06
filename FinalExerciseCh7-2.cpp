// (Numerical) a. Define an array with a maximum of 20 integer values, and fill the array with 
// numbers input from the keyboard or assigned by the program. Then write a function named 
// split() that reads the array and places all zeros or positive numbers in an array named  positive 
// and all negative numbers in an array named negative. Finally, have your program call a function 
// that displays the values in both the positive and negative arrays.
//  b. Extend the program written for Exercise 6a to sort the positive and negative arrays into 
// ascending order before they’re displayed.
#include <iostream>
using namespace std;

void split(int[]);

int main() {

    int array[20] = {-22, -21, 2, 96, -38, 64, -91, 59, 86, -82, -77, 43, -4, -10, -71, -31, 16, 8, 97, 47};

    split(array);

    return 0;

}

void split(int array[]) {

    int posSize = 0, negSize = 0;
    int positive[20];
    int negative[20];

    for (int i = 0; i < 20; i++) {
        if (array[i] >= 0) {
            positive[posSize++] = array[i];
        }
        else {
            negative[negSize++] = array[i];
        }
    }

    for (int i = 0; i < posSize; i++) {
        cout << positive[i] << endl;
    }
    cout << "-----------------------------" << endl;
    for (int i = 0; i < negSize; i++) {
        cout << negative[i] << endl;
    }


    
}