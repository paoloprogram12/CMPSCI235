#include <stdio.h>
#include <math.h> // for power

int main() {
const double PI = 3.1416;
double radius, height, volume;

printf("Enter a radius: ");
scanf("%lf", &radius);
printf("Enter a height: ");
scanf("%lf", &height);

volume = PI * pow(radius, 2.0) * height;
printf("The volume of the cylinder with radius \
%lf and height %lf is %lf square inches.\n", radius, height, volume);

return 0;
}