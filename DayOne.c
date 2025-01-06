#include <stdio.h> // name of the library file

int main() {
    printf("Hello World\n"); //  \n is used for new line

    int numOne, numTwo;
    printf("Enter Two Numbers: ");
    
    scanf("%d %d", &numOne, &numTwo); // input for int numbers
    printf("numOne: %d, numTwo: %d\n", numOne, numTwo);
    return 0;
}
