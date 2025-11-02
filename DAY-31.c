// Q61: Search for an element in an array using linear search

#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
  
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found) printf("Element found at index %d\n", i);
    else printf("Element not found\n");
    return 0;
}

// Q62: Reverse an array without taking extra space

#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
