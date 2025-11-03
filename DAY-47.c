// Q93: Check if two strings are anagrams

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;
  
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    for(i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
        if(s1[i] >= 'a' && s1[i] <= 'z') freq1[s1[i]-'a']++;
    for(i = 0; s2[i] != '\0' && s2[i] != '\n'; i++)
        if(s2[i] >= 'a' && s2[i] <= 'z') freq2[s2[i]-'a']++;

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}

// Q94: Find the longest word in a sentence

#include <stdio.h>

int main() {
    char str[200], word[50];
    int i = 0, j = 0, maxLen = 0, curLen = 0, maxStart = 0, start = 0;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] != ' ') {
            if(curLen == 0) start = i;
            curLen++;
        } else {
            if(curLen > maxLen) {
                maxLen = curLen;
                maxStart = start;
            }
            curLen = 0;
        }
        i++;
    }
    if(curLen > maxLen) {
        maxLen = curLen;
        maxStart = start;
    }
    for(i = 0; i < maxLen; i++) word[i] = str[maxStart + i];
    word[maxLen] = '\0';
    printf("%s\n", word);
    return 0;
}
