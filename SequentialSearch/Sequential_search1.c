#include<stdio.h>

int sequentialSearch(int arr[],int n,int target){
    int index = 0;
    while(index < n){
        if(target == arr[index]){
            return index;
        }
        index++;
    }

    return -1;
}

int main(){
    int arr[]={1,4,5,0,44,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 5;

    int result = sequentialSearch(arr,n,target);
    if(result != -1){
        printf("Element found at index %d\n",result);
    }
    else{
        printf("Element not found.");
    }
}

