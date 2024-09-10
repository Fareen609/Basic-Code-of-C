#include <stdio.h>

int main() {
    int i, j, k;
    int m, n;
    
    // Input size of the first array
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &m);
    
    int arr1[m];
    
    // Input elements of the first sorted array
    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Input size of the second array
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n);
    
    int arr2[n];
    
    // Input elements of the second sorted array
    printf("Enter the elements of the second sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Array to hold the merged sorted array
    int merged[m + n];
    
    i = 0;  // Index for arr1
    j = 0;  // Index for arr2
    k = 0;  // Index for merged
    
    // Merge the two arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // Copy remaining elements of arr1, if any
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    
    // Copy remaining elements of arr2, if any
    while (j < n) {
        merged[k++] = arr2[j++];
    }
    
    // Print the merged sorted array
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}

