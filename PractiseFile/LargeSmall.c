#include<stdio.h>

int compareFunc(int arr[],int n){
    int larger = arr[0];
    int smaller = arr[0];
    int i;
    for(i=0;i<n;i++){
        if(arr[i] > larger)  
            larger = arr[i]; 
        else if(arr[i] < smaller) 
            smaller = arr[i];  
    }
    printf("The larger element is: %d\n",larger);
    printf("The smaller element is: %d\n",smaller);
}

int main(){
    int arr[100],n,i;
    printf("Enter size of array(n):\t");
    scanf("%d",&n);
    printf("\nEnter %d integers:\n",n);
    for(i=0;i<n;i++) {
        printf("arr%d = ",i+1);
        scanf("%d",&arr[i]);
    }
    compareFunc(arr, n);

    return 0;
}