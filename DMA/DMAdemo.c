#include <stdio.h>
#include <stdlib.h>
int main(){
	/*int x=10;*/
	int* p=(int*)malloc(sizeof(int));
	*p=40;
	printf("value at p=%d\n",*p);
	return 0;
}

