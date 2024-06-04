#include <stdio.h>

void merge(int A[], int mid, int lb, int ub)
{
    int i, j, k, B[100];
    i = lb;
    j = mid + 1;
    k = lb;

    while (i <= mid && j <= ub)
    {
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= ub)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = lb; i <= ub; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int lb, int ub){
    int mid; 
    if(lb<ub){
        mid = (lb + ub) /2;
        mergeSort(A, lb, mid);
        mergeSort(A, mid+1, ub);
        merge(A, mid, lb, ub);
    }
}

int main()
{
    int A[] = {5, 2, 6, 1, 7, 9, 4, 13};
    int n = sizeof(A) / sizeof(A[0]);
    int lb = 0,ub = n-1;
    printf("Unsorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    mergeSort(A, lb, ub);

    printf("Sorted Array after Merge Sort: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
