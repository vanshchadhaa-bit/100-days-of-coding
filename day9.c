//Q17-Write a program to find the roots of a quadratic equation and categorize them.

#include <cstdio>
#include <cmath>

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        double root = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root);
    }
    else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}


//Q18-Write a program to assign grades based on a percentage input

#include <cstdio>

int main() {
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage entered.\n");
    }
    else if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80) {
        printf("Grade: B\n");
    }
    else if (percentage >= 70) {
        printf("Grade: C\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
    }
    else if (percentage >= 50) {
        printf("Grade: E\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
