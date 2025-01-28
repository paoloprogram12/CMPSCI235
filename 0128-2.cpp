#include <iostream>
using namespace std;

int factorial(int n);

int main() {

    int n, product;

    cout << "Enter a number" << endl;
    cin >> n;

    product = factorial(n);

    cout << "The product is: " << product << endl;

}

int factorial (int n) { // recursion

    if (n == 1) { // terminates the recursion
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// factorials
// 5!
