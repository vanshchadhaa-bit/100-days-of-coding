//Q99: Change date format dd/04/yyyy to dd-Apr-yyyy

#include <stdio.h>
#include <stdlib.h>

void date_format(char *date_str) {
    char day[3], month[3], year[5];
    int i=0,j=0;
    while (date_str[i] != '/') day[j++] = date_str[i++];
    day[j]='\0';
    i++; j=0;
    while (date_str[i] != '/') month[j++] = date_str[i++];
    month[j]='\0';
    i++; j=0;
    while (date_str[i] != '\0') year[j++] = date_str[i++];
    year[j]='\0';
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m = atoi(month);
    printf("%s-%s-%s\n", day, months[m-1], year);
}

int main() {
    char date[] = "23/04/2023";
    date_format(date);
    return 0;
}


//Q100: Print all substrings of a string

#include <stdio.h>
#include <stdlib.h>

void all_substrings(char *s) {
    int len=0;
    while(s[len]!='\0') len++;
    for (int i=0; i < len; i++) {
        for (int j=i; j < len; j++) {
            for (int k=i; k <= j; k++) putchar(s[k]);
            putchar('\n');
        }
    }
}

int main() {
    char s[] = "abc";
    all_substrings(s);
    return 0;
}
