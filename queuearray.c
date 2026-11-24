#include<stdio.h>
#define N 5
static int queue[N];
static int front=-1;
static int rear=-1;
void enqueue(int data){
	if(rear==N-1){
		printf("Queue Overflow\n");
		return;
	}
	queue[++rear]=data;
	if(rear==0)
		front=0;
}
int dequeue(){
	if((front==-1)&&(rear==-1)){
		printf("Empty Queue\n");
		return -1;
	}
	int x=queue[front++];
	if(front>rear){
		front=-1;
		rear=-1;
	}
	return x;
}
