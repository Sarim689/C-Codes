#include <stdio.h>
int power(unsigned int,unsigned int);
int main(){
	unsigned int x; unsigned int n;
	printf("enter 2 positive no.: ");
	scanf("%u%u",&x,&n);
	int result=power(x,n);
	printf("%u to the power %u=%d\n",x,n,result);
	return 0;
}
int power(unsigned int x,unsigned int n){
	if(n==0)
		return 1;
	if(n==1)
		return x;
	return x*power(x,n-1);
}
