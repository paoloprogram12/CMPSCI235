#include <iostream>
using namespace std;

int main() {

    bool grader = false;

    int grade;
    int avgCount = 0;
    int gradesTotal = 0;
    double avg;

    cout << "Enter a grade:" << endl;

    while (grader == false) {

        cin >> grade;

        if ((grade <= 100) && (grade >= 0)) {
            cout << "Enter another grade:" << endl;
            gradesTotal += grade;
            avgCount++;
        }
        else if (grade == 999) {
            avg = gradesTotal / avgCount;
            cout << "The grade average total is: " << avg << endl;
            break;
        }
        else {
            cout << "Invalid input, try again" << endl;
        }
    }

    return 0;

}