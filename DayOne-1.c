#include <stdio.h>

int main() {
    // 1. Day to minutes with day, minutes
    int day, min;

    // 2. day = 1
    day = 1;

    // 3. minutes = day * 24 * 60
    min = day * 24 * 60;

    // 4. Output the value of minutes
    printf("The number of minutes in %d days is %d minutes. \n", day, min);

    // 5. Stop
    return 0;
}