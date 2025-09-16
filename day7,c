//Q13-Write a program to input a year and check whether it is a leap year or not using conditional statements

#include <cstdio>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

//Q14-Write a program to input a character and check whether it is a vowel or consonant using if–else

#include <cstdio>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to ignore stray newlines

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } 
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    } 
    else {
        printf("Invalid input.\n");
    }

    return 0;
}
