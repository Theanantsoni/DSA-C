#include <stdio.h>

#define SIZE 5

void push();
void pop();
void show();
void peep();
void update();
int top = -1;
int arr[SIZE];

int main()
{

	int i, ch = 0;

	while (ch < 6)
	{
		printf("\n\n**********STACK MEMORY ALLOCATION**********\n");
		printf("\n1. Push element into stack \n2. Pop the element \n3. Search the elemets \n4. Update the element \n5. Show elements \n6. Exit \n\n");
		printf("Enter the choise: ");
		scanf("%d", &ch);

		switch (ch)
		{

		case 1:
			push();
			break;

		case 2:
			pop();
			break;

		case 3:
			peep();
			break;

		case 4:
			update();
			break;

		case 5:
			show();
			break;

		default:
			break;
		}
	}
	return 0;
}

void push()
{
	int x;

	if (top >= SIZE - 1)
	{
		printf("\nStack Overflow....");
	}
	else
	{
		printf("\nEnter the element: ");
		scanf("%d", &x);
		top = top + 1;
		arr[top] = x;
	}
}

void pop()
{
	if (top == -1)
	{
		printf("\nStack Underflow....");
	}
	else
	{
		printf("\nPoped element: %d", arr[top]);
		top = top - 1;
	}
}

void peep()
{
	int x;

	printf("\nEnter the position: ");
	scanf("%d", &x);

	if (top - x + 1 <= -1)
	{
		printf("\nStack overflow....");
	}
	else
	{
		printf("\nThe element is: %d", arr[top - x + 1]);
	}
}

void update()
{
	int v1, v2;

	printf("\nEnter position to change: ");
	scanf("%d", &v1);

	printf("\nEnter the number for change: ");
	scanf("%d", &v2);

	if (top - v1 + 1 <= -1)
	{
		printf("\nStack is underflow");
	}
	else
	{
		arr[top - v1 + 1] = v2;
		printf("\nUpdate successfully!!");
	}
}

void show()
{
	int i;

	if (top == -1)
	{
		printf("\nStack Underflow....");
	}
	else
	{
		for (i = top; i >= 0; --i)
		{
			printf("%d\t", arr[i]);
		}
		printf("\n");
	}
}