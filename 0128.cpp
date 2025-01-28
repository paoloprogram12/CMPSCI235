#include <iostream>
using namespace std;

int findMax(int numOne, int numTwo) {

    if (numOne > numTwo) {
        return numOne;
    }
    else {
        return numTwo;
    }

}

int main() {

    cout << findMax(123, 1) << endl;

    return 0;
}