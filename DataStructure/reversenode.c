#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
}*head=NULL;
void createlist(int);
void traverselist();
void insertnode(int,int);
void deletenode(int);
void reverselist();
int main(int argc,char*argv[]){
	int option,no_of_nodes,pos,data,position;
	while(1){
		printf("1. Create List\n");
		printf("2. Traverse List\n");
		printf("3. Insert Node\n");
		printf("4. Delete Node\n");
		printf("5. Reverse List\n");
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
				printf("Enter position to delete node: ");
				scanf("%d",&position);
				deletenode(position);
				break;
			case 5:
				printf("Reversed List: \n");
				reverselist();
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
void insertnode(int data,int pos){
	struct Node* temp,*p=head;
	int count=1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
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
		}
		else
			printf("Position doesn't exist\n");
	}
}
void deletenode(int position){
	struct Node* q,*p=head;
	q=head;
	int count=1;
	if(head==NULL){
		printf("Empty List\n");
		return;
	}
	else if(position==1){
		head=p->next;
		p->next=NULL;
		free(p);
	}
	else{
		while((q!=NULL)&&(count<position)){
			p=q;
			q=q->next;
			count++;
		}
		p->next=q->next;
		q->next=NULL;
		free(q);
	}
}
void reverselist(){
	struct Node* p,*q,*r;
	r=head;
	q=r;
	q=NULL;
	while(r!=NULL){
		p=q;
		q=r;
		r=r->next;
		q->next=p;
	}
	head=q;
}





























