//	Insertion Sort :

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j,temp;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Values in Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i;j>0 && a[j-1]>temp; j--)
		{
			a[j] = a[j-1];
		}
		a[j] = temp;
	}
	
	printf("\nSorted Result : ");
	for(i=0; i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}


// Second Example
/*

//Insertion Sort

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
void insertionSort(int *A, int n)
{
	int key, i, j;
	for(i=0; i<= n-1; i++)
	{
		key = A[i];
		j = i-1;
		
		while(A[j] > key)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}
int main()
{
	 int A[] = {12, 54, 65, 7, 23, 9};
	 int n=6;
	 printArray(A, n);
	 insertionSort(A, n);
	 printArray(A, n);
	 return 0;
}

*/
