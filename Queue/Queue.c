#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];

int r = -1, f = -1;

void enqueue(int data);
void dequeue();
void peek();
void display();
bool isempty();
bool isfull();

int main()
{
    int ch, data;
    while (1)
    {
        printf("\n1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Peek Operation\n");
        printf("4.Display the Queue\n");
        printf("5.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be inserted : ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }
}

bool isempty()
{
    if (r == -1 && f == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isfull()
{
    if (r == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int data)
{
    if (!isfull())
    {
        r++;
        queue[r] = data;
    }
    else
    {
        printf("Queue is full.\n");
    }
}

void dequeue()
{
    if (!isempty())
    {
        f++;
        printf("Dequeued element: %d\n", queue[f]);
        if (f > r)
        {
            f = r = -1; // Reset queue when all elements are dequeued
        }
    }
    else
    {
        printf("Queue is empty.\n");
    }
}

void peek()
{
    if (isempty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("The Top most value is: %d\n", queue[r]);
    }
}

void display()
{
    if (r == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        int i;
        printf("\nQueue elements are:\n");
        for (i = f; i <= r; i++)
            printf("%d  ", queue[i]);
    }
    printf("\n");
}