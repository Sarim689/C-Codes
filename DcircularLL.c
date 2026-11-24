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
	int option,n,pos,data;
	while(1){
		printf("1. Create List\n");
		printf("2. Traverse List\n");
		printf("3. Insert Node\n");
		printf("4. Delete Node\n");
		printf("5. Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter no. of nodes: ");
				scanf("%d",&n);
				createlist(n);
				break;
			case 2:
				traverselist();
				break;
			case 3:
				printf("Enter Data\n");
				scanf("%d",&data);
				printf("Enter position to insert Node\n");
				scanf("%d",&pos);
				insertnode(data,pos);
				break;
			case 4:
				printf("Enter position to delete Node\n");
				scanf("%d",&pos);
				deletenode(pos);
				break;
			case 5:
				exit(0);
			default:
				printf("wrong option\n");
				break;
		}
	}
	return 0;
}
void createlist(int n){
	struct Node* temp,*p;
	int data,i;
	for(i=1;i<=n;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->prev=temp;
		temp->next=temp;
		printf("Enter DATA\n");
		scanf("%d",&temp->data);
		if(head==NULL || i==1)
			head=temp;
		else{
			p=head;
			while(p->next!=head)
				p=p->next;
			p->next=temp;
			temp->prev=p;
			temp->next=head;
			head->prev=temp;
		}
	}
}
void traverselist(){
	struct Node* p=head;
	while(p->next!=head){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
	p=p->next;
	printf("%d\t",p->data);
	p=p->prev;
	printf("%d\n",p->data);
	while(p!=head){
		printf("%d\t",p->data);
		p=p->prev;
	}
	printf("%d",p->data);
	printf("\n");
}
void insertnode(data,pos){
	struct Node* temp, *p=head;
	int c=1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->prev=temp;
	temp->data=data;
	temp->next=temp;
	if(p==NULL && pos!=1)
		printf("position doesn't exist\n");
	if(pos==1){
		if(temp==NULL){
			printf("couldn't create\n");
			return;
		}
		if(head==NULL)
			head=temp;
		else{
			while(p->next!=head)
				p=p->next;
			temp->next=head;
			head->prev=temp;
			head=temp;
			p->next=temp;
			temp->prev=p;
		}
	}
	else{
		p=head;
		while((p->next!=head) && (c<pos-1)){
			p=p->next;
			c++;
		}
		if(c==pos-1){
			temp->prev=p;
			temp->next=p->next;
			p->next->prev=temp;
			p->next=temp;
		}
		else
			printf("Position doesn't Exist\n");
	}
}
void deletenode(pos){
	struct Node* q,*p=head;
	q=head;
	int c=1;
	if(head==NULL){
		printf("Empty List\n");
		return;
	}
	if(pos==1){
		if(p->next==head){
			head=NULL;
			free(p);
		}
		else{
			while(p->next!=head) p=p->next;
			p->next=q->next;
			q->next->prev=p;
			head=q->next;
			q->next=NULL;
			q->prev=NULL;
			free(q);
			return;
		}
	}
	else{
		while((p->next!=head)&&(c<pos)){
			p=p->next;
			c++;
		}
		if(c==pos){
			p->prev->next=p->next;
			p->next->prev=p->prev;
			p->prev=NULL;
			p->next=NULL;
			free(p);
			return;
		}
		else
			printf("Position doesn't exist\n");
	}
}
































