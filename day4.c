//Q7-Write a program to swap two numbers without using a third variable.

#include <cstdio>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}


//Q8-Write a program to find and display the sum of the first n natural numbers.

#include <cstdio>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
