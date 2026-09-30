#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;
void push();
void pop();
void display();
int main()
{
int choice;
printf("\n-------- STACK OPERATIONS --------\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Display\n");
printf("4. Exit\n");
while (1)
{
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:

push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("\nExiting program...\n");
return 0;
default:
printf("\nInvalid choice. Please enter 1 to 4.\n");
}
}
return 0;
}
/* Push operation */
void push()
{
int item;
if (top == MAX_SIZE - 1)
{
printf("\nStack Overflow! Stack is full.\n");
}
else
{
printf("Enter the element to be inserted: ");
scanf("%d", &item);
top++;
stack[top] = item;

printf("%d inserted into the stack.\n", item);
}
}
/* Pop operation */
void pop()
{
int item;
if (top == -1)
{
printf("\nStack Underflow! Stack is empty.\n");
}
else
{
item = stack[top];
top--;
printf("\nThe popped element: %d\n", item);
}
}
/* Display operation */
void display()
{
int i;
if (top == -1)
{
printf("\nStack is Empty.\n");
}
else
{
printf("\nThe stack elements are:\n");
for (i = top; i >= 0; i--)
{
printf("%d\n", stack[i]);
}
}

}