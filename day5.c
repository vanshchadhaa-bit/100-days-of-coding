//Q9-Write a program to calculate simple and compound interest for given principal, rate, and time

#include <cstdio>
#include <cmath>

int main() {
    double principal, rate, time;
    
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Simple Interest
    double simple_interest = (principal * rate * time) / 100.0;

    // Compound Interest
    double amount = principal * pow(1 + rate / 100.0, time);
    double compound_interest = amount - principal;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}


//Q10-Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <cstdio>

int main() {
    int total_seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
