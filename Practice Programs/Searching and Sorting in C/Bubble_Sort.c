//	Bubble Sort :

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j,temp;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Values In Array :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=n;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\nSorted Result : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}

//Second Example : 

/*

#include<stdio.h>
#include<conio.h>

void printArray(int *A, int n)
{
	int i;
	for(i=0; i< n; i++)
	{
		printf(" %d", A[i]);
	}
	printf("\n");
}

void bubbleSort(int *A, int n)
{
	int i, j, temp;
	for(i=0; i< n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main()
{
	int A[] = {12, 54, 65, 7, 23, 9};
	int n = 6;
	
	printArray(A, n);
	bubbleSort(A, n);
	printArray(A, n);  
	
	return 0;
}

*/

