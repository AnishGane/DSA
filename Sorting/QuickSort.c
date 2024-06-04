#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb]; // Pivot element
    int start = lb;
    int end = ub;

    while( start < end){
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] >= pivot){
            end--;
        }
        if(start < end){
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
}

// QuickSort function
void quickSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        // loc is partitioning index, arr[loc] is now at right place
        int loc = partition(arr, lb, ub);

        // Separately sort elements before partition and after partition
        quickSort(arr, lb, loc - 1);
        quickSort(arr, loc + 1, ub);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test QuickSort
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: ");
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
