#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
static struct Node* rear=NULL;
static struct Node* front=NULL;
void enqueue(int data){
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->next=NULL;
	temp->data=data;
	if(temp==NULL){
		printf("queue Overflow\n");
		return;
	}
	if((front==NULL)&&(rear==NULL)){
		rear=temp;
		front=temp;
	}
	else{
		rear->next=temp;
		rear=rear->next;
	}
}
int dequeue(){
	if((front==NULL)&&(rear==NULL)){
		printf("Empty queue\n");
		return -1;
	}
	else{
		struct Node* temp;
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp=front;
		int data=front->data;
		front=front->next;
		if(front==NULL)
			rear=NULL;
		temp->next=NULL;
		free(temp);
		return data;
	}
}
