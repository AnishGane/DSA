#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 8

int stack[MAXSIZE];
int top = -1; // Initialize top to -1 (empty stack)

// Functions declaration
int push(int data);
int pop();
int peek();
int isempty();
int isfull();

// Main function
int main()
{
    while (1)
    {
        int choice, data;
        printf("===== Main Menu =====\n");
        printf("1. Insert data in stack.\n");
        printf("2. Retrieve data from stack.\n");
        printf("3. Peek top value from stack.\n");
        printf("4. To exit.\n");
        printf("\nEnter what operation to be performed: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a data to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
    printf("Stack is full : %s\n", isfull() ? "true" : "false");
    printf("Stack is empty : %s\n", isempty() ? "true" : "false");
    return 0;
}

int isempty()
{
    if (top == -1)
        return 1; // Stack is empty
    else
        return 0; // Stack is not empty
}

int isfull()
{
    if (top == MAXSIZE - 1)
        return 1; // Stack is full
    else
        return 0; // Stack is not full
}

int peek()
{
    if (!isempty())
    {
        printf("The Top Most value in the stack is: %d\n", stack[top]);
    }
    else
    {
        printf("Stack is empty.\n");
    }
}

int push(int data)
{
    if (!isfull())
    {
        top++;
        stack[top] = data;
        printf("Data pushed: %d\n", data);
    }
    else
    {
        printf("Stack is full\n");
    }
}

int pop()
{
    int data;
    if (!isempty())
    {
        data = stack[top];
        top--;
        printf("The removed data from stack is: %d\n", data);
    }
    else
    {
        printf("Stack is empty.\n");
    }
}

// You can also write display function .
// int display(){
//     int i;
//     for(i = top;i >=0;i--){
//         printf("%d\n",stack[i]);
//     }
//     printf("\n");
// }