#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node* prev;
	int data;
	struct Node* next;
}*head=NULL;
void createlist(int);
void traverselist();
void insertnode(int,int);
void deletenode(int);
int main(int argc,char*argv[]){
	int option,no_of_nodes,pos,data;
	while(1){
		printf("1. Create List\n");
		printf("2. Traverse List\n");
		printf("3. Insert Node\n");
		printf("4. Delete Node\n");
		printf("10. Exit\n");
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
				printf("Enter data: ");
				scanf("%d",&data);
				printf("Enter position to insert new node: ");
				scanf("%d",&pos);
				insertnode(data,pos);
				break;
			case 4:
				printf("Enter position to delete Node\n");
				scanf("%d",&pos);
				deletenode(pos);
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
		if(temp==NULL){
			printf("Couldn't create\n");
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
void insertnode(int data,int pos){
	struct Node* temp,*p=head;
	int count=1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;
	if(pos==1){
		temp->next=head;
		head=temp;
	}
	else{
		while(p->next!=NULL && count<pos-1){
			p=p->next;
			count++;
		}
		if(count==pos-1){
			temp->next=p->next;
			p->next=temp;
			temp->prev=p;
			temp->next->prev=temp;
		}
		else
			printf("Position doesn't exist\n");
	}
}
void deletenode(int pos){
	struct Node* p;
	p=head;
	int i=1;
	if(pos==1 && head==NULL){
		printf("Empty List\n");
		return;
	}
	else if(p->next==NULL){
		head=p->next;
		p->prev=NULL;
		free(p);
	}
	else {
		while(i<pos && p!=NULL){
			p=p->next;
			i++;
		}
		if(i!=pos){
			printf("position doesnt exist\n");
			return;
		}
		if(p->next!=NULL)
			p->next->prev=p->prev;
		p->prev->next=p->next;
		p->prev=NULL;
		p->next=NULL;
		free(p);
	}
}































