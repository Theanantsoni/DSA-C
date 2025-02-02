//Linear Search in C ...
#include<stdio.h>
#include<conio.h>

void main() 
{
    int i, x = 12, flag = 0;
    int A[100];

    printf("Enter 5 elements of the array: \n");
    for(i = 0; i < 5; i++) 
	{
        scanf("%d", &A[i]);
    }

    // Linear search for x
    for(i = 0; i < 5; i++) 
	{
        if(A[i] == x) 
		{
            printf("Element found at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if(!flag) 
	{
        printf("Element not found\n");
    }
    
}


// Second Example : 
/*
#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[], int size, int element)
{
	int i;
	for (i=0; i< size; i++)
	{
		if(arr[i] == element)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	 int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,64};
	 int size = sizeof(arr)/sizeof(int);
	 int element = 23; 
	 int searchIndex = linearSearch(arr, size,element);
	 printf("The element %d was found at index %d \n", element, searchIndex);
	return 0;
}
*/
