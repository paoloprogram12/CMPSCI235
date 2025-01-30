#include <iostream>
using namespace std;

int main() {

    const int SIZE = 5;
    int temp[SIZE];


    for (int i = 0; i < SIZE; i++) {
        cin >> temp[i];
    }

    for (int i = 0; i < SIZE; i++) {
        cout << temp[i] << " ";
    }

    return 0;

}