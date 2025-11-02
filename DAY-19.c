//Q37 Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}

//Q38 Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
