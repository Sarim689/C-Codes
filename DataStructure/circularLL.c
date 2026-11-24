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
		temp->next=temp;
		printf("Enter DATA\n");
		scanf("%d",&temp->data);
		if(head==NULL)
			head=temp;
		else{
			p=head;
			while(p->next!=head) p=p->next;
			p->next=temp;
			p=p->next;
			p->next=head;
		}
	}
}
void traverselist(){
	struct Node* p=head;
	while(p->next!=head){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	printf("\n");
}
void insertnode(data,pos){
	struct Node* temp, *p=head;
	int c=1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=temp;
	if(p==NULL && pos!=1)
		printf("position doesn't exist\n");
	if(pos==1){
		struct Node*p=head;
		while((p!=NULL)&&(p->next!=head))
			p=p->next;
		if(p==NULL)
			head=temp;
		else{
			temp->next=head;
			head=temp;
			p->next=head;
		}
	}
	else{
		while(p->next!=head && c<pos-1){
			p=p->next;
			c++;
		}
		if(c==pos-1){
			temp->next=p->next;
			p->next=temp;
		}
	}
}
void deletenode(pos){
	struct Node* q,*p=head;
	q=head;
	int count=1;
	if(p==NULL){
		printf("Empty List\n");
		return;
	}
	if(pos==1){
		head=head->next;
		p->next=NULL;
		free(p);
		return;
	}
	else{
		while((q->next!=head)&&(count<pos)){
			p=q;
			q=q->next;
			count++;
		}
		p->next=q->next;
		q->next=NULL;
		free(q);
	}
}
































