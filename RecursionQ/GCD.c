#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
        printf("Since num1 is less than num2, After swapping value Now num1 is : %d & num2 is: %d\n", a, b);
    }

    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int num1, num2;

    printf("Enter first integer num1 : \n");
    scanf("%d", &num1);
    printf("Enter Second integer num2 : \n");
    scanf("%d", &num2);

    printf("GCD of %d and %d is : %d. \n", num1, num2, gcd(num1, num2));

    return 0;
}
