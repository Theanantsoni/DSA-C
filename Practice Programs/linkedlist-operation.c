#include<stdio.h>
#include<stdlib.h>

//reverse of linked list and all operation

struct node{
	int data;
	struct node* next;
};
struct node *head;

int countnode(){
	int count;
	struct node *temp=head;
	while(temp!=0){
		temp=temp->next;
		count++;
	}
	return count;
}
void display(){
	if(head==0){
		printf("\nLinkedlist is empty!\n");
	}else{
		struct node *temp;
		temp=head;
		printf("\nLinked List Data:\t");
		while(temp!=0){
			printf("%d\t", temp->data);
			temp=temp->next;
		}	
	}
	
}

struct node* createNode(int data){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=0;
	return newnode;
}

void createlist(int data){
	struct node *newnode=createNode(data);
	head=newnode;
	printf("Created and inserted successfully!\n");
}
void insert_beg(int data){
	struct node *newnode=createNode(data);
	newnode->next=head;
	head=newnode;
	printf("inserted at beginning od list successfully!\n");	
}

void insert_end(int data){
	if(head==0){
		printf("\nLinkedlist is empty, insert data!\n");
		return;
	}
	struct node *newnode=createNode(data);
	struct node *temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	printf("inserted at end of list successfully!\n");
}

void insert_pos(int data){
	int pos,i=1;
	struct node *temp;
	printf("Enter the position to insert:");
	scanf("%d", &pos);
	int count=countnode();
	if(pos>count){
		printf("invalid position\n");
	}else{
		temp=head;
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		struct node *newnode=createNode(data);
		newnode->data=data;
		newnode->next=temp->next;
		temp->next=newnode;
		printf("Data inserted at position %d successfully!\n", pos);
	}
}

void delete_beg(){
	if(head==0){
		printf("\nLinkedlist is empty!\n");
		return;
	}
	struct node *temp;
	temp=head;
	int data=head->data; //data to show
	head=head->next;
	free(temp);	
	printf("\nDeleted from beginning value: %d\n", data);
}

void delete_end(){
	struct node *prenode, *temp;
	temp=head;
	while(temp->next!=0){
		prenode=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=0;
	}else{
		prenode->next=0;
	}
	free(temp);
	printf("\nDeleted from end of list.\n");
}

void delete_pos(){
	struct node *temp, *nextnode;
	int pos, i=1;
	printf("Enter the position for delete:");
	scanf("%d", &pos);
	temp=head;
	while(i<pos-1){
		temp=temp->next;
		i++;
	} 
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
	printf("\nDeleted from position %d\n", pos);
}

void reserve(){
	struct node *prenode, *currentnode, *nextnode;
	prenode=0;
	nextnode=currentnode=head;
	while(nextnode!=0){
		nextnode=nextnode->next;
		currentnode->next=prenode;
		prenode=currentnode;
		currentnode=nextnode;
	}
	head=prenode;
}

void main(){
	int data,choice;
	head=0;
	while(1)
	{
		printf("\nMenu\n");
		printf("1. create linked list\n");
		printf("2. Insert at beginning\n");
		printf("3. Insert at end\n");
		printf("4. Insert at position\n");
		printf("5. display\n");
		printf("6. delete from beginning\n");
		printf("7. delete from end\n");
		printf("8. delete from position\n");
		printf("9. reverse list\n");
		printf("0. exit\n");
		
		printf("enter your choice:");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("\nCreating linked list...\n");
				printf("Enter data:");
				scanf("%d", &data);
				createlist(data);
				break;
			case 2:
				printf("\nEnter data:");
				scanf("%d", &data);
				insert_beg( data);
				break;
			case 3:
				printf("\nEnter data:");
				scanf("%d", &data);
				insert_end(data);
				break;
			case 4:
				printf("\nEnter data:");
				scanf("%d", &data);
				insert_pos(data);
				break;
			case 5:
				display();
				break;
			case 6:
				delete_beg();
				break;
			case 7:
				delete_end();
				break;
			case 8:
				delete_pos();
				break;
			case 9:
				printf("\nBefore reverse\n");
				display();
				reserve();
				printf("\nAfter reverse\n");
				display();
				break;
			case 0:
				printf("\nExiting");
				exit(0);
			default:
				printf("\ninvalid choice!");
				
		}	
	}
}
