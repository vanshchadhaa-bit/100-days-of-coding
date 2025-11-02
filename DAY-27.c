// Q53: Print a diamond-shaped star pattern

#include <stdio.h>

int main() {
    int i, j;
    int max_stars = 5;
  
    for(i = 1; i <= max_stars; i += 2) {
        for(j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    for(i = max_stars - 2; i >= 1; i -= 2) {
        for(j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    return 0;
}

// Q54: Print a centered diamond star pattern

#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 4;
  
    for(i = 1; i <= rows; i++) {
        for(space = i; space < rows; space++) printf(" ");
        for(j = 1; j <= 2*i - 1; j++) printf("*");
        printf("\n");
    }
    for(i = rows - 1; i >= 1; i--) {
        for(space = rows; space > i; space--) printf(" ");
        for(j = 1; j <= 2*i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
