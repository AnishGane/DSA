#include<stdio.h>
#include<stdbool.h>
int MAXSIZE = 5;
int top = -1;
int stack[5]; 

// function to check if stack is empty ->
bool isempty(){
    if(top == -1)
        return true;
    else
        return false;
}

// Function to check if stack is full -> 
bool isfull() {
    if(top == MAXSIZE)
        return true;
    else
        return false;
}

// Function to return topmost value in the stack ->
int peek(){
    return stack[top];
}

// Function to pop out the data ->
int pop(){
    int data;
    if(!isempty()){
        data = stack[top];
        top = top - 1;
        return data;
    }else{
        printf("Stack Underflow\n");
    }
}

// Function to push the data in stack ->
int push(int data){
    if(!isfull()){
        top = top + 1;
        stack[top] = data;
    }else{
        printf("Stack Overflow\n");
    }
}

int main(){
    push(44);
    push(30);
    push(10);
    push(99);
    push(15);

    printf("The topmost value of stack is: %d\n",peek());

    printf("Elements :\n");
    while (!isempty())
    {
        printf("%d\n",pop());
    }

    printf("Stack is full - %s\n",isfull()?"true":"false");
    printf("Stack is empty - %s\n",isempty()?"true":"false");
    return 0;
    
}
