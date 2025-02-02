//	Selection Sort :

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m,j,loc,temp;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Values in Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++) 
	{
		m=a[i];
		loc=i+1;
		
		for(j=i+1;j<n;j++)
		{
			if(m>a[j])
			{
				m=a[j];
				loc=j;
			}
		}
		if(a[loc]<a[i])
		{
			temp=a[loc];
			a[loc]=a[i];
			a[i]=temp;
		}
	}
	printf("Sorted Array: ");
	
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

//Second Example : 

/*

#include<stdio.h>
#include<conio.h>

void printArray(int *A, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf(" %d", A[i]);
	}
	printf("\n");
}

void selectionSort(int *A, int n)
{
	int i, j, temp;
	for(i=0; i<n; i++)
	{
		int indexofmin = i;
		for(j=i+1; j<n; j++)
		{
			if(A[j] < A[indexofmin])
			{
				indexofmin = j; 
			}
			
			temp = A[i];
			A[i] = A[indexofmin];
			A[indexofmin] = temp;
		}
	}
}

void main()
{
	int A[] = {3, 5, 2, 13, 12};
	int n = 5;
	
	printArray(A, n);
	selectionSort(A, n);
	printArray(A,n);
	
	return 0;
}

*/
