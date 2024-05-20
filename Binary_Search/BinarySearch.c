#include<stdio.h>

int binarysearch(int arr[], int lb, int ub, int key) {
    if (lb <= ub) {
        int m = lb + (ub - lb) / 2;
        if (key == arr[m]) {
            return m;
        } else if (key < arr[m]) {
            return binarysearch(arr, lb, m - 1, key);
        } else {
            return binarysearch(arr, m + 1, ub, key);
        }
    }
    return -1; // Element not found
}

int main() {
    int n, i, key, lb, ub;
    printf("Size: \t");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array in ascending or descending order: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("Enter the number you want to search:\t");
    scanf("%d", &key);

    lb = 0; // Initialize lb
    ub = n - 1; // Initialize ub

    int result = binarysearch(arr, lb, ub, key);
    if (result != -1) {
        printf("The number is found at index %d.\n", result);
    } else {
        printf("The number is not found.\n");
    }

    return 0;
}
