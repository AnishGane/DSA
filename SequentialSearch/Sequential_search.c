#include<stdio.h>
int main(){
    int arr[100],n,i,key,status = 0;

    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are:\n ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    // number you want to search
    printf("Enter number you want to search:\t");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(key == arr[i]){
            status = 1;
        }
    }
    if(status == 1){
        printf("The Number is matched.");
    }
    else{
        printf("Number not found.");
    }

    return 0;
}