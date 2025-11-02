// Q55: Display prime numbers from 1 to n

#include <stdio.h>

int main() {
    int limit, num, divisor, isPrime;
    scanf("%d", &limit);

    for(num = 2; num <= limit; num++) {
        isPrime = 1;
        for(divisor = 2; divisor*divisor <= num; divisor++) {
            if(num % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d ", num);
    }
    printf("\n");
    return 0;
}

// Q56: Read and print elements of a one-dimensional array

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
  
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
