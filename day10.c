//Q19-Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Not a valid triangle.\n");
        return 0;
    }

    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } 
    else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    } 
    else {
        printf("The triangle is Scalene.\n");
    }
    return 0;
}

//Q20-Write a program to display the day of the week based on a number (1–7) using switch-case.\

#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
