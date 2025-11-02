//Q39 Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, product = 1, remainder;
    int foundOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            foundOdd = 1;
        }
        num /= 10;
    }
    if (foundOdd)
        printf("Product of odd digits is: %d\n", product);
    else
        printf("No odd digits found in the number.\n");
    return 0;
}

//Q40 Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int binaryNum, temp, digit, onesComplement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);
  
    temp = binaryNum;
    while (temp != 0) {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }
        int flippedBit = (digit == 0) ? 1 : 0;
        onesComplement += flippedBit * place;
        place *= 10;
        temp /= 10;
    }
    printf("1's complement of %d is %d\n", binaryNum, onesComplement);
    return 0;
}
