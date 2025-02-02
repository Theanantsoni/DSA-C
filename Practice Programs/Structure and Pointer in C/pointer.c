#include<stdio.h>
#include<conio.h>
void main()
{
	int a=76;
	int* ptra = &a; //create variable- pointer get a value address
	int *ptr2=NULL;
	
	printf("\nThe address of pointer to A is : %p", &ptra);
	printf("\nThe address of A is : %p", &a);
	printf("\nThe address of A is : %p", ptra);
	printf("\nThe value of A is : %d", *ptra);
	printf("\nThe value of A is : %d", a);
	printf("\nThe address of some garbage : %p", ptr2);
	
}
