//Q43-Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit, i, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (num > 0) {
        digit = num % 10;

        factorial = 1;
        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;

        num /= 10;
    }
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
    return 0;
}


//Q44-Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float term = (2 * i - 1) / (float)(2 * i);
        sum += term;
    }
    printf("Sum of the series: %f\n", sum);
    return 0;
}

