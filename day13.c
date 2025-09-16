//Q25-Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char op;
    int num1, num2, result;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                result = num1 / num2;
                printf("Result: %d\n", result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                result = num1 % num2;
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}

//Q26-)Write a program to print numbers from 1 to n.

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
