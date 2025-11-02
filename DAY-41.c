// Q81: Count characters in a string without using built-in length functions

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
  
    fgets(str, sizeof(str), stdin);
    while(str[count] != '\0' && str[count] != '\n') count++;
    printf("%d\n", count);
    return 0;
}

// Q82: Print each character of a string on a new line

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}
