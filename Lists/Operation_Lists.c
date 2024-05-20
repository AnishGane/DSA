#include <stdio.h>
#include <stdlib.h>

void create(int a[100], int *);
void insert(int a[100], int *);
void delete (int a[100], int *);
void update(int a[100], int *);
void traverse(int a[100], int *);
void searching(int a[100], int *);
void merging(int a[100], int b[100], int *, int *);

int main()
{
    int choice, n = 0, m, a[100], b[100];
    printf("\n======= Menu for Program =======\n");
    printf("\n1: Create\n2: Insert\n3: Delete\n4: Update\n5: Traverse\n6: Searching\n7: Merging\n");

    do
    {
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter size of first list:\t");
            scanf("%d", &n);
            create(a, &n);
            break;
        case 2:
            insert(a, &n);
            break;
        case 3:
            delete(a, &n);
            break;
        case 4:
            update(a, &n);
            break;
        case 5:
            traverse(a, &n);
            break;
        case 6:
            searching(a, &n);
            break;
        case 7:
            printf("Enter size of second List:\t");
            scanf("%d", &m);
            merging(a, b, &n, &m);
            break;

        default:
            exit(0);
            break;
        }

    } while (choice < 8);
    return 0;
}

void create(int a[100], int *n)
{
    printf("Enter elements of first list:\n");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void insert(int a[100], int *n)
{
    int pos, elem, i;
    printf("Enter a position:\t");
    scanf("%d", &pos);
    if (pos < 0 || pos > *n)
    {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter your element:\t");
    scanf("%d", &elem);
    for (i = *n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = elem;
    (*n)++;
}

void delete (int a[100], int *n)
{
    int pos, i;
    printf("Position:\t");
    scanf("%d", &pos);
     if (pos < 0 || pos >= *n)
    {
        printf("Invalid position.\n");
        return;
    }
    for (i = pos; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void update(int a[100], int *n)
{
    int pos, elem;
    printf("Enter position:\t");
    scanf("%d", &pos);
    if (pos < 0 || pos >= *n)
    {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter a new element:\t");
    scanf("%d", &elem);
    a[pos] = elem;
}

void traverse(int a[100], int *n)
{
    int i;
    printf("\nElements are :\n");
    for (i = 0; i < *n; i++)
        printf("%d\t", a[i]);
}

void searching(int a[100], int *n)
{
    int target, i;
    printf("\nEnter searched element:\t");
    scanf("%d", &target);
    for (i = 0; i < *n; i++)
    {
        if (target == a[i])
        {
            printf("\nSearched Successfully.\n");
            return;
        }
    }
        printf("\nElement not found.\n");
}

void merging(int a[100], int b[100], int *n, int *m)
{
    int i, j = *n;
    printf("Enter elements of second list:\n");
    for (i = 0; i < *m; i++)
    {
        scanf("%d", &b[i]);
        a[j] = b[i];
        j++;
        (*n)++;
    }

    printf("\nMerged Array:\n");
    for (i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}