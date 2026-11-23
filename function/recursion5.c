#include <stdio.h>
int main(){
	unsigned int x; unsigned int n;
	printf("enter 2 no.: ");
	scanf("%u%u",&x,&n);
	int result=power(x);
	printf("result: %u",result);
	return 0;
}
int power(unsigned int x,unsigned int n){
	int result=1,i;
	for(i=0;i<n;i++)
		result*=x;
	return result;
}
