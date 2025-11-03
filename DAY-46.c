// Q91: Remove all vowels from a string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;
  
    fgets(str, sizeof(str), stdin);
    char result[100];
    while(str[i] != '\0' && str[i] != '\n') {
        if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
            result[j++] = str[i];
        i++;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}

// Q92: Find the first repeating lowercase alphabet in a string

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;
  
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}
