//Q5-Write a program to convert temperature from Celsius to Fahrenheit

#include <cstdio>

int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}


//Q6-Write a program to swap two numbers using a third variable

    
#include <cstdio>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
