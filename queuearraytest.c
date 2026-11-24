#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
int main(int argc,char* argv[]){
	int opt,data;
	while(1){
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Exit\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("Enter Data\n");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				data=dequeue();
				if(data!=-1)
					printf("%d\n",data);
				break;
			case 3:
				exit(0);
			default :
				printf("Wrong Option\n");
		}
	}
	return 0;
}
