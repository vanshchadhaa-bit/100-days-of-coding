//Q11-Write a program to input an integer and check whether it is even or odd using if–else

#include <cstdio>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}


//Q12-Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <cstdio>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
