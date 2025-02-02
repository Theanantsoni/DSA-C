//Merge Sort :

#include<stdio.h>
#include<conio.h>

void merge(int *arr, int *leftArray, int ls, int *rightArray, int rs)
{
    int i=0, j=0, k=0;
    
    while (i<ls && j<rs)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i<ls)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j<rs)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergesort(int *arr, int n)
{
    if (n<2)
    {
        return;
    }
    
    int ls = n / 2;
    int rs = n - ls;
    
    int leftArray[ls], rightArray[rs], i;
    
    for (i=0; i<ls; i++)
    {
        leftArray[i] = arr[i];
    }
    for (i=ls; i<n; i++)
    {
        rightArray[i-ls] = arr[i];
    }
    
    mergesort(leftArray, ls);
    mergesort(rightArray, rs);
    merge(arr, leftArray, ls, rightArray, rs);
}

int main()
{
    int i, size;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    int a[size];
    
    printf("Enter Array Values: ");
    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    mergesort(a,size);
    
    printf("Sorted Array: ");
    for (i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}


// Second Example : 
/*
	#include<stdio.h>
#include<conio.h>

void printArray(int *A, int n)
{	
	int i;
	for(i = 0; i < n; i++)
	{
		printf(" %d", A[i]);
	}
	printf("\n");
}

void merge(int A[], int low, int mid, int high)  // Corrected order of parameters
{
	int i, j, k;
	int B[high - low + 1];  // Temporary array to store sorted elements
	i = low;
	j = mid + 1;
	k = 0;
	
	while(i <= mid && j <= high)  // Corrected logical issue (&& instead of ||)
	{
		if(A[i] < A[j])
		{
			B[k] = A[i];
			i++;
		}
		else
		{
			B[k] = A[j];
			j++;
		}
		k++;
	}
	while(i <= mid)
	{
		B[k] = A[i];
		k++;
		i++;
	}
	while(j <= high)
	{
		B[k] = A[j];
		k++;
		j++;
	}
	
	for(i = low, k = 0; i <= high; i++, k++)  // Copy sorted elements back into original array
	{
		A[i] = B[k];
	}
} 

void mergeSort(int A[], int low, int high)
{
	int mid; 
	if(low < high)
	{
		mid = (low + high) / 2;
		mergeSort(A, low, mid);      // Sort first half
		mergeSort(A, mid + 1, high); // Sort second half
		merge(A, low, mid, high);    // Merge the sorted halves
	}
}

int main()
{
	int A[] = {9, 4, 4, 8, 7, 5, 6};
	int n = 7;
	
	printArray(A, n);
	mergeSort(A, 0, n - 1);  // Call mergeSort on the full array
	printArray(A, n);
	return 0;
}

*
