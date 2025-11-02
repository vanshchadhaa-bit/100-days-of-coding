// Q69: Find second largest element

#include <stdio.h>

int main() {
    int n, i;
    int max1 = -2147483648, max2 = -2147483648;
    scanf("%d", &n);
    int arr[n];
  
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    if(max2 == -2147483648) printf("No second largest\n");
    else printf("%d\n", max2);
    return 0;
}

// Q70: Rotate array right by k positions

#include <stdio.h>

void reverse(int a[], int start, int end) {
    int temp;
    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i, k;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    k %= n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
