#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int data){
	if(rear==N-1){
		printf("Queue overflow!\n");
	}else if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=data;
		printf("successfully inserted!\n");
	}else{
		rear++;
		queue[rear]=data;
		printf("successfully inserted!\n");
	}
}

void dequeue(){
	if(front==-1&&rear==-1){
		printf("\nQueue is empty\n");
	}else if(front==rear){
		front=rear=-1;
		printf("\nsuccessfully deleted!\n");
	}else{
		front++;
		printf("\nsuccessfully deleted!\n");
	}
}

void display(){
	if(front==-1&&rear==-1){
		printf("\nQueue is empty\n");
	}else{
		printf("\nQueue:\t");
		int i;
		for(i=front;i<=rear;i++){
			printf("%d\t", queue[i]);
		}
		printf("\n");
	}
}

void peek(){
	if(front==-1&&rear==-1){
		printf("\nQueue is empty\n");
	}else{
		printf("\ntop value: %d\n", queue[front]);
	}
}

void main(){
	int choice,data;
	while(1){
		printf("\nMenu\n");
		printf("0. Exit\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Front data of Queue\n");
		
		
		printf("Enter your choice:");
		scanf("%d", &choice);
		switch(choice){
			
			case 1:
				printf("\nEnter data to insert:");
				scanf("%d", &data);
				enqueue(data);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 0:
				printf("\nExiting....");
				exit(0);
			default:
				printf("Invalid choice");
		}
	}

}
