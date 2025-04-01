#include <stdio.h>
#include <math.h>


int main() {

    const double PI = 3.14159;

    double radius;
    double circumference;
    double area;

    printf("Please enter value of radius\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("The circle's circumference is: %lf\n", circumference);
    printf("Circle's area: %lf\n", area);



    return 0;
}