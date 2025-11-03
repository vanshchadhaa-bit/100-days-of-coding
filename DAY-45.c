// Q89: Count frequency of a given character in a string

#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;
  
    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ch) count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}

// Q90: Toggle case of each character in a string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        i++;
    }
    printf("%s", str);
    return 0;
}
