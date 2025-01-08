#include <stdio.h>

int main() {

    int numOne, numTwo, numThree, avg;
    printf("Enter Three Numbers:\n");
    scanf("%d", &numOne); // & is saying address of variable numOne
    scanf("%d", &numTwo);
    scanf("%d", &numThree);

    avg = (numOne + numTwo + numThree) / 3;
    printf("Average is: %d\n", avg);

    return 0;

}