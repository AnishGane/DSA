#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}


// Algorithm ->

// 1. The user is prompted to enter the number of disks.
// 2. The towerOfHanoi function is called with the following arguments:

        //     n: The number of disks
        //     source: The rod from which the disks are initially placed (represented by 'A')
        //     destination: The rod to which the disks need to be moved (represented by 'C')
        //     auxiliary: The auxiliary rod used for moving disks (represented by 'B')


// 3. The towerOfHanoi function implements the recursive logic to solve the Tower of Hanoi problem:

        // If there is only one disk (n == 1), it prints the instruction to move the disk from the source rod to the  destination rod.
        // If there are more than one disk (n > 1), it follows these steps:
            // a. Recursively solve the problem for n - 1 disks, moving them from the source rod to the auxiliary rod using the destination rod as the auxiliary rod.
            // b. Move the remaining disk (the largest disk) from the source rod to the destination rod.
            // c. Recursively solve the problem for n - 1 disks, moving them from the auxiliary rod to the destination rod using the source rod as the auxiliary rod.

// 4. The program output shows the step-by-step instructions to move the disks from the source rod to the destination rod following the rules of the Tower of Hanoi problem.

// When you run the program and enter the number of disks, it will print the sequence of steps required to solve the Tower of Hanoi problem for the given number of disks.