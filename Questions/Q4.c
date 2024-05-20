
#include<stdio.h>

//  Q You are given a num = 98402521, then without using array, find the sum of num having even position and product  of num having odd position.
int main(){
    int num = 98402521;
    printf("The number is %d\n",num);

    int sum_even=0,product_odd=1;
    int digit;
    int position = 1;

    while(num > 0){
        digit = num %10;

        // Check if the position is even or odd
        if(position % 2 == 0){
            sum_even+=digit;
        }
        else{
            if (digit != 0) // Exclude 0 from product if it's at an odd position
                product_odd *= digit;
        }

        num/=10;
        position++;
    }

    printf("The sum of number in even position is: %d\n",sum_even);
    printf("The product of number in odd position is: %d",product_odd);

    return 0;
}