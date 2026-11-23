#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int* p=(int*)calloc(5,sizeof(int)); /* (int*)malloc(5*sizeof(int)); */ 
	for(i=0;i<5;i++)
		p[i]=i*i;		/* *(p+i)=i; */
	for(i=0;i<5;i++)
		printf("%d\t",p[i]);
	printf("\n");
	return 0;
}

