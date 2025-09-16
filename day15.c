//Q27-Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}

//Q28-Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    return 0;
}
