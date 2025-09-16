//Q3-Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <cstdio>

int main() {
    double length, breadth;
    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter breadth: ");
    scanf("%lf", &breadth);

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}



//Q4-Write a program to calculate the area and circumference of a circle given its radius.

#include <cstdio>

int main() {
    const double PI = 3.14;
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
