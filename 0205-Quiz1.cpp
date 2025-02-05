#include <iostream>
using namespace std;

int main() {

    const int SIZE = 6;
    double distance[] = {6.29, 6.95, 7.25, 7.35, 7.40, 7.42};

    for (int i = 0; i < SIZE; i++) {
        cout << distance[i] << " ";
    }
    cout << endl;

    return 0;

}