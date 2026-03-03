//Implement a stack data structure using an array with the following operations: push, pop, and display.

#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;   // initially stack is empty

// Push operation
void push(int value)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

// Pop operation
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n", stack[top]);
    top--;
}

// Display operation
void display()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    for(int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int choice;
        scanf("%d", &choice);
        if(choice == 1)
        {
            int value;
            scanf("%d", &value);
            push(value);
        }
        else if(choice == 2)
        {
            pop();
        }
        else if(choice == 3)
        {
            display();
        }
    }
    return 0;
}