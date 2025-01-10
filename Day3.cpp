#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int i;

    cout << "Hello ";

    for (i = 1; i < argc; i++) {
        cout << argv[i];
    }
    cout << "!" << endl;

    return 0;
}