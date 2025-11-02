// Q63: Merge two arrays

#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d", &n1);
    int a[n1];
  
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    int b[n2];
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);
    for(i = 0; i < n1; i++) printf("%d ", a[i]);
    for(i = 0; i < n2; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}

// Q64: Most frequent digit in a number

#include <stdio.h>

int main() {
    int n, d, freq[10] = {0}, i, max = 0, digit = 0;
    scanf("%d", &n);
  
    if(n == 0) freq[0]++;
    if(n < 0) n = -n;
    while(n > 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }
    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }
    printf("%d\n", digit);
    return 0;
}
