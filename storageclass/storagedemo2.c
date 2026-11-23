#include <stdio.h>
int main(){
	int age=20;
	printf("age=%d\n",age);
	if(1){
		int age=40;
		printf("age=%d\n",age);
	}
	printf("age=%d\n",age);
	return 0;
}
