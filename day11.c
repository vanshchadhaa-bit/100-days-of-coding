//Q21-Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28 or 29 days\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }
    return 0;
}

//Q22-Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, difference, percentage;
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    difference = sellingPrice - costPrice;
  
    if (difference > 0) {
        percentage = (difference / costPrice) * 100;
        printf("Profit of %.2f%%\n", percentage);
    } else if (difference < 0) {
        percentage = (-difference / costPrice) * 100;
        printf("Loss of %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}
