#include<stdio.h>
int main(){
    long num = 98402521;
    printf("The number is %ld\n",num);
    int rem,sum=0;

    while (num!=0)
    {
    rem=num%10;
    sum+=rem;
    num/=10;
    }

    printf("The sum of above number is: %d",sum);
    
}