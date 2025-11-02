// Q65: Binary search in sorted array

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;
    scanf("%d", &n);
    int arr[n];
  
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = 1;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(found) printf("Found at %d\n", mid);
    else printf("Not found\n");
    return 0;
}

// Q66: Insert in sorted array

#include <stdio.h>

int main() {
    int n, i, key, pos = 0;
    scanf("%d", &n);
    int arr[100];
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] > key) break;
    }
    pos = i;
    for(i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = key;
    n++;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
