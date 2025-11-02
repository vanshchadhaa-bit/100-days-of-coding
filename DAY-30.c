// Q59: Count even and odd numbers in an array

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
  
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);
    return 0;
}

// Q60: Count positive, negative, and zero elements in an array

#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive elements: %d\n", pos);
    printf("Negative elements: %d\n", neg);
    printf("Zero elements: %d\n", zero);
    return 0;
}
