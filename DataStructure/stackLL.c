#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
static struct Node* top=NULL;
void push(int data){
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Stack Overflow\n");
		return;
	}
	temp->data=data;
	temp->next=top;
	top=temp;
}
int pop(){
	if(top==NULL){
		printf("Empty Stack\n");
		return -1;
	}
	struct Node* temp;
	temp=top;
	top=top->next;
	temp->next=NULL;
	int data=temp->data;
	free(temp);
	return data;
}
