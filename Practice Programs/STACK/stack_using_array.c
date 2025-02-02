#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int *arr; 
};

int isEmpty(struct stack * ptr)
{
	if(ptr -> top == -1)
	{
		return 1; //When True
	}
	else
	{
		return 0; //When false
	}
}

int isFull(struct stack * ptr)
{
	if(ptr -> top == ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;		
	}
}

void main()
{
//	struct stack s;
//	s.size = 80;
//	s.top = -1;
//	s.arr = (int *) malloc(s.size * sizeof(int));

	struct stack *s = (struct stack *) malloc(sizeof(struct stack));
	s->size = 80;
	s->top = -1;
	s->arr = (int *) malloc(s->size * sizeof(int));
	
	//pushing an element manually..
//	s->arr[0] = 7;
//	s->top++;
	
	//Check if stack is empty ...
	if(isEmpty(s))
	{
		printf("The stack is Empty.");
	}
	else
	{
		printf("The stack is not Empty");
	}
}
