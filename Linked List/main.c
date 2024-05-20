#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void deleteAtBeg();
void deleteAtEnd();
void deleteRandom();
void search();
void display();
int main()
{
    printf("==== Main Menu ===");
    printf("\n1. Insert at begin\n2. Insert at end\n3. Insert at random location\n4. Delete node at begin\n5. Delete node at end\n6. Delete at random loaction\n7. Display the data in nodes\n8. Search Element in List\n9. To exit.");
    int choice;
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            deleteAtBeg();
            break;
        case 5:
            deleteAtEnd();
            break;  
        case 6:
            deleteRandom();
            break;
        case 7:
            display();
            break;
        case 8:
            search();
            break;
        default:
            exit(0);
            break;
        }
    } while (choice < 9);
    return 0;
}

//insertion at beginning ->
void beginsert(){
    struct node *newnode;
    int item;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\nOVERFLOW\n");
    }else{
        printf("\nEnter the element to be inserted : ");
        scanf("%d",&item);
        newnode->data=item;
        newnode->next=head;
        head=newnode;
        printf("\nNew node inserted at beginning.\n");
    }
}

//insertion at end->
void lastinsert(){
    struct node* newnode, *temp;
    int item;
    newnode=(struct node*) malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\nOVERFLOW\n");
    }else{
        printf("Enter the data:");
        scanf("%d",&item);
        newnode->data=item;
        if(head == NULL){
            newnode->next=NULL;
            head=newnode;
            printf("\nNew node inserted at end.\n");
        }else{
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
            printf("\nNew node inserted at end.");
        }
    }
}

// insertion at random location->
void randominsert(){
    struct node *temp,*newnode;
    int loc,i,item;
    newnode=(struct node*)malloc(sizeof(struct node*));
    if(newnode == NULL){
        printf("\nOVERFLOW");
    }else{
        printf("Enter the data:\t");
        scanf("%d", &item);
        newnode->data=item;
        printf("Enter location:");
        scanf("%d",&loc);
        temp = head;
        while (i<loc)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("\nNew node inserted at given location.\n"); 
    }
}

// delete at the beginning->
void deleteAtBeg(){
    struct node *temp;
    if(head == NULL){
        printf("\nList is Empty.\n");
    }else{
        temp = head;
        head = temp->next;
        free(temp);
        printf("Node at the beginnig has been deleted.\n");
    }
}

// Delete at the end->
void deleteAtEnd(){
    struct node *temp,*prev;
    if(head == NULL){
        printf("\nList is empty\n");
    }else if(head->next==NULL){
        free(head);
        head=NULL;
        free(head);
        printf("\nOnly node of the list is deleted.\n");
    }else{
        temp=head;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("\nThe Last node is deleted.\n");
    }
}

void deleteRandom(){
    struct node *temp,*nextnode;
    int pos,i=1;
    printf("\nEnter a location form which you want to delete that node:");
    scanf("%d",&pos);
    temp = head;
    while(i < pos-1){
        temp = temp->next;
        i++;
        if(temp == NULL){
            printf("\nCan't delete.");
            return;
        }
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    printf("\nThe %d node is deleted from the linked list.",pos);
}

void search(){
    struct node *temp;
    int i=0,item,flag;
    temp = head;
    if(temp == NULL){
        printf("\nEmpty Lists.\n");
    }else{
        printf("\nEnter an item to be searched in the lists:\n");
        scanf("%d",&item);
        while(temp!=NULL){
            if(temp->data == item){
                printf("Item found at location %d.\n",i+1);
                flag = 0;
            }else{
                flag = 1;
            }
            i++;
            temp = temp->next;
        }
    }
    if(flag == 1){
        printf("Item not found in the lists.\n");
    }
}

void display()  
{  
    struct node *temp;  
    temp = head;   
    if(temp == NULL)  
    {  
        printf("Nothing to print\n");  
    }  
    else  
	    {  
	        printf("Printing values . . . . .\n");   
	        while (temp!=NULL)  
	        {  
	            printf("\n%d",temp->data);  
	            temp = temp -> next;  
	        }  
	    }  
	}     
