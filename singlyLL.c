#include<stdio.h>
#include<stdlib.h>
struct Node{
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
			case 10:
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
		temp->next=NULL;
		printf("Enter DATA\n");
		scanf("%d",&temp->data);
		if(head==NULL)
			head=temp;
		else{
			p=head;
			while(p->next!=NULL) p=p->next;
			p->next=temp;
		}
	}
}
void traverselist(){
	struct Node* p=head;
	while(p!=NULL){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}

































