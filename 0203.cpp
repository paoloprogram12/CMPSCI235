#include <iostream>
using namespace std;

int linearSearch(int[], int);

int main() {

    const int NUMEL = 10;
    int nums[NUMEL] = {5, 10, 22, 32, 45, 67, 73, 98, 99, 101};

    int input;

    cout << "What number are you looking for?" << endl;
    cin >> input;

    int found = linearSearch(nums, input);

    if (found >= 0) {
        cout << "Number found at index " << found << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;

}

int linearSearch (int array[], int number) {

    for (int i = 0; i < 10; i++) {
        if (array[i] == number) {
            return i;
        }
    }

    return -1;

}