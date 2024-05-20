#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter number to get factorial : ");
    scanf("%d",&n);

    int res = fact(n);
    printf("The factorial of given number %d is : %d",n,res);
    return 0;
}

int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}