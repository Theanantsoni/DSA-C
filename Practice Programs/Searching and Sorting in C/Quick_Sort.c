//	Quick Sort :

#include<stdio.h>
#include<conio.h>

void quicksort(int a[], int low, int high)
{
    if(low<high)
    {
        int pivot = a[high];
        int i = low-1,temp;
        int j;  // Declare the loop variable outside the loop

        for(j=low;j<=high-1;j++)
        {
            if(a[j]<pivot)
            {
                i++;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[i+1];
        a[i+1] = a[high];
        a[high] = temp;

        quicksort(a,low,i);
        quicksort(a,i+2,high);
    }
}


void main()
{
	int i,j,n,low,high,pivot,temp;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Values in Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	
	printf("\nSorted Result : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
