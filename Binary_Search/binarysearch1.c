#include <stdio.h>

int bs(int a[], int lb, int ub, int key)
{
    if (ub >= lb)
    {
        int mid = lb + (ub - lb) / 2;

        // If the element is present at the middle itself
        if (a[mid] == key)
        {
            return mid; // mid le hamro index lai represent garxa jaile
        }
        else if (a[mid] > key)
        {
            // The element can only be present in the left subarray
            return bs(a, lb, mid - 1, key);
        }
        else
        {
            
            // The element can only be present in the right subarray
            return bs(a, mid + 1, ub, key);
        }
        // We reach here when element is not present in array
        return -1;
    }
}

int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int key;
    printf("Enter number to search: ");
    scanf("%d", &key);

    int n = sizeof(a) / sizeof(a[0]);
    int lb = 0, ub = n - 1;

    int result = bs(a, lb, ub, key);
    (result == -1) ? (printf("Element not found")) : (printf("%d is founded at index %d", key,result));

    return 0;
}