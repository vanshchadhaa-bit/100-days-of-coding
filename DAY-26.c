// Q51: Print right aligned numbers starting from 5

#include <stdio.h>

int main() {
    int i, j, spaces;
  
    for(i = 5; i >= 1; i--) {
        for(spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// Q52: Print the given star pattern

#include <stdio.h>

int main() {
    int i;
    printf("*\n\n");

    for(i = 0; i < 4; i++) {
        printf("*\n");
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    for(i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    printf("*\n");
    return 0;
}
