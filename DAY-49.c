//Q97-Print the initials of a name

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int i;
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    char toUpper(char c) {
        if (c >= 'a' && c <= 'z') {
            return c - ('a' - 'A');
        }
        return c;
    }
    if (name[0] != '\0' && name[0] != '\n') {
        printf("%c", toUpper(name[0]));
    }
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf(" %c", toUpper(name[i + 1]));
        }
    }
    printf("\n");
    return 0;
}

//Q98-Print initials of a name with the surname displayed in full

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char name[100];
    char initials[100] = "";
    char surname[100] = "";
    int i = 0, j = 0, k = 0, lastSpaceIndex = -1;

    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    while (name[i] != '\0') {
        if (name[i] == ' ')
            lastSpaceIndex = i;
        i++;
    }
    i = 0;
    if (i < lastSpaceIndex && name[i] != ' ') {
        printf("%c. ", (name[i] >= 'a' && name[i] <= 'z') ? name[i] - ('a' - 'A') : name[i]);
    }
    while (i < lastSpaceIndex) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", (name[i + 1] >= 'a' && name[i + 1] <= 'z') ? name[i + 1] - ('a' - 'A') : name[i + 1]);
        }
        i++;
    }
    i = lastSpaceIndex + 1;
    while (name[i] != '\n' && name[i] != '\0') {
        putchar(name[i]);
        i++;
    }
    printf("\n");
    return 0;
}
