//Binary Search in C ...

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, n = 5, low = 0, high = n - 1, mid, x = 10;  // Adjusted high = n - 1 for 0-based indexing
    int A[100];
    
    printf("Enter the 5 elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    // Check if the array is sorted in ascending or descending order
    if (A[0] < A[n - 1])  // Ascending order
    {
        // Binary search for ascending order
        while(low <= high)
        {
            mid = (low + high) / 2;  // Calculate the middle element
            
            if(x == A[mid])          // Found the element
            {
                printf("Element %d found at position %d.\n", x, mid);  // Adjust mid + 1 to start from 1
                return;               // Exit after finding the element
            }
            else if(x < A[mid])       // Move to the left half
            {
                high = mid - 1;
            }
            else                      // Move to the right half
            {
                low = mid + 1;
            }
        }
    }
    else  // Descending order
    {
        // Binary search for descending order
        while(low <= high)
        {
            mid = (low + high) / 2;  // Calculate the middle element
            
            if(x == A[mid])          // Found the element
            {
                printf("Element %d found at position %d.\n", x, mid);  // Adjust mid + 1 to start from 1
                return;               // Exit after finding the element
            }
            else if(x > A[mid])       // Move to the left half (for descending)
            {
                high = mid - 1;
            }
            else                      // Move to the right half (for descending)
            {
                low = mid + 1;
            }
        }
    }
    
    // If the element was not found
    printf("Element %d not found in the array.\n", x);
}


//Second Example : 

/*

#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[], int size, int element)
{
	int mid, high=size-1, low=0;
	
	while(low<=high)
	{
		mid = (low+high)/2;
		
		if(arr[mid] == element)
		{
			return mid;
		}
		if(arr[mid] < element)
		{
			low = mid+1; 
		}
		else
		{
			high = mid-1;
		}
	}
	return -1;
}

int main()
{
	 int arr[] = {20, 25, 26, 39, 48, 59, 120, 135, 189, 200};
	 int size = sizeof(arr)/sizeof(int);
	 int element = 26; 
	 int searchIndex = binarySearch(arr, size,element);
	 printf("The element %d was found at index %d \n", element, searchIndex);
	return 0;
}

*/

