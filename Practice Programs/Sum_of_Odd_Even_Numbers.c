#include<stdio.h>

void  main()
{
	int i, n, sum = 0, avg = 0;  // Initialize sum to 0
	int arr[100];
	
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		printf("\033[31mEnter the element of the array: \033[0m");
		scanf("%d", &arr[i]);
	}
	
	// Loop through the array to find even numbers and sum them
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)  // Check if the element is even
		{
			sum += arr[i];   // Add the even element to sum
		}
	}
	
	printf("Sum of all even elements in the array is: %d\n", sum);
	
	// Loop through the array to find odd numbers and sum them
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 != 0)  // Check if the element is odd
		{
			avg += arr[i];   // Add the odd element to sum
		}
	}
	
	printf("Sum of all odd elements in the array is: %d\n", avg);
		
	getch();
	

}


