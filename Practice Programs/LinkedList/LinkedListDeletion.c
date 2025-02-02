//1. Delete the first node
//2. Delete the between node
//3. Delete the last node
//4. Delete the node with a given value


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct  Node
{
	int data;
	struct Node * next;
};

void linkedlistTraversal(struct Node * ptr)
{
	while(ptr!=NULL)
	{
		printf("Element : %d\n", ptr->data);
		ptr = ptr->next;	
	}
}

//Case: 1 - Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head)
{
	struct Node * ptr = head; //create pointer and point to head
	head = head->next;
	free(ptr);
	return head;
}

//Case: 2 - Deleting the element at a given index the linked list
struct Node * deleteAtIndex(struct Node * head, int index)
{
	int i;
	struct Node *p = head;
	struct Node *q = head->next;
	for(i=0; i<index-1; i++)
	{
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}

//Case: 3 - Deleting the last linked list
struct Node * deleteAtLast(struct Node * head)
{
	struct Node *p = head;
	struct Node *q = head->next;
	while(q->next !=NULL)
	{
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	return head;
}

//Case: 4 - Deleting the element with a given value from the linked list
struct Node * deleteAtGivenValue(struct Node * head, int index)
{
	int i;
	int value= 32;
	struct Node *p = head;
	struct Node *q = head->next;
	
	while(q->data!=value && q->next!=NULL)
	{
		p = p->next; 
		q = q->next;
	}
	
	if(q->data == value)
	{
		p->next = q->next;
	}
	return head;
}

void main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	//Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));
	fourth = (struct Node *) malloc(sizeof(struct Node));
	
	//Link first and second nodes
	head->data = 4;
	head->next = second;
	
	//Link second and third nodes
	second->data = 3;
	second->next = third;
	
	//Link third and fourth nodes
	third->data = 8;
	third->next = fourth;
	
	//Terminate the list at the third node
	fourth->data = 1;
	fourth->next = NULL;
	
	printf("\nLinked list before deletion\n");
	linkedlistTraversal(head);
	
//	head = deleteFirst(head);
	
//	head = deleteAtIndex(head, 2); 

//	head = deleteAtLast(head); 

	head = deleteAtGivenValue(head, 50);

	printf("\nLinked list after deletion\n");
	linkedlistTraversal(head);
}
