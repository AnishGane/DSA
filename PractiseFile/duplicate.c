#include <stdio.h>

// Function to remove duplicate elements from the array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int temp[n];
    int j = 0;
    
    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    }
    
    temp[j++] = arr[n - 1];
    
    // Copy the unique elements back to the original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    
    return j;
}

int main() {
    int arr[] = {10, 20, 20, 30, 30, 40, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Remove duplicates
    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
