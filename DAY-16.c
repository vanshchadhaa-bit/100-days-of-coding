//Q-31 Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, i;
    int arr[32];
    int index = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    while(n > 0) {
        arr[index++] = n % 2;
        n = n / 2;
    }

    printf("Binary representation: ");
    for(i = index - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

//Q-32 Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}
