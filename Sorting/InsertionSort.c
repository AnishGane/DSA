#include<stdio.h>

int main(){
    int n,i,j;
    printf("Enter the size of an array :\t");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of an array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The unsorted elements of an array are :\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    for(j=1;j<=n-1;j++){
        for(i=0;i<=j-1;i++){
            if(arr[i] > arr[j]){
                 int temp;
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
            }
        }
    }
    printf("The Sorted elements of an array are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}