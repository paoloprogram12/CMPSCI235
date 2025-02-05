#include <iostream>
using namespace std;

int main() {

    int *gptr;
    int grade[5];

    gptr = &grade[0];

    grade[0] = 75;
    grade[1] = 82;
    grade[2] = 91;
    grade[3] = 60;
    grade[4] = 71;

    for (int i = 0; i < 5; i++) {
        cout << grade[i] << endl;
    }
    cout << "----------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(gptr + i) << endl;
    }

    return 0;

}