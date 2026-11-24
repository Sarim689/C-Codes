#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node* prev;
	int data;
	struct Node* next;
}*head=NULL;
void createlist(int);
void traverselist();
int main(int argc,char*argv[]){
	int option,no_of_nodes;
	while(1){
		printf("1. Create List\n");
		printf("2. Traverse List\n");
		printf("3. Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter no. of nodes: ");
				scanf("%d",&no_of_nodes);
				createlist(no_of_nodes);
				break;
			case 2:
				traverselist();
				break;
			case 3:
				exit(0);
			default:
				printf("wrong option\n");
				break;
		}
	}
	return 0;
}
void createlist(int no_of_nodes){
	struct Node* temp,*p;
	int data,i;
	for(i=1;i<=no_of_nodes;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		if(temp==NULL){
			printf("Couldn't Create\n");
			return;
		}
		temp->prev=NULL;
		temp->next=NULL;
		printf("Enter DATA\n");
		scanf("%d",&temp->data);
		if(head==NULL || i==1)
			head=temp;
		else{
			p=head;
			while(p->next!=NULL) p=p->next;
			p->next=temp;
			temp->prev=p;
		}
	}
}
void traverselist(){
	struct Node* p=head;
	if(p==NULL){
		printf("Empty List\n");
		return;
	}
	while(p->next!=NULL){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
	while(p->prev!=NULL){
		printf("%d\t",p->data);
		p=p->prev;
	}
	printf("%d\n",p->data);
}

































