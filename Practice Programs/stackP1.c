#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
#define N 5

int stack[N];
int top=-1;

void push()
{
	int x;
	printf("Enter Element: ");
	scanf("%d", &x);
	if(top==N-1)
	{
		printf("\t \tStack Overflow! \t\n");
		printf("\n");
	}
	else
	{
		top++;
		stack[top]=x;
	}
	
}

void pop()
{
	int x;
	if(top==-1)
	{
		printf("\t \tStack Underflow\t \n");
		printf("\n");
	} else{
		x=stack[top];
		top--;
		printf("\t \tDeleted Item: %d\n", x);
	}
}

void peek()
{
	if(top==-1)
	{
		printf("\t \tStack is Empty\t \n");
		printf("\n");
	} else 
	{
		printf("\t \tTop most element: %d\t \n", stack[top]);
	}
}

void display()
{
	int i;
	printf("\t \tStack Element: ");
	for(i=top;i>=0;i--)
	{
		printf("%d ", stack[i]);
	}
	printf("\n");
}

void isEmpty() {
	if (top == -1) {
	printf("Stack is empty\n");
	} else {
	printf("Stack is not empty\n");
	}
}

void isFull() {
	if (top == N - 1) {
	printf("Stack is Full.\n");
	} else {
	printf("Stack is Not Full.\n"); 
	}
}


int main(){
	int choice;
	while(1)
	{
		printf("Menu for Stack Operation:\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peek\n");
		printf("4. display\n");
		printf("5. exit\n");
		printf("6. stack full?\n");
		printf("7. stack empty\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			case 6:
				isFull();
				break;
			case 7:
				isEmpty();
				break;
			default:
				printf("Invalid Choice!");
		}
	}
	return 0;
}
