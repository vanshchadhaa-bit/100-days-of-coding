//Q41 Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount = 0, temp, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    lastDigit = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digitsCount++;
    }
    firstDigit = temp;
    if (digitsCount == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    temp = num % (int)pow(10, digitsCount + 1);
    temp /= 10;
    swappedNum = lastDigit * (int)pow(10, digitsCount) + temp * 10 + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}

//Q42 Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
  
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
    return 0;
}
