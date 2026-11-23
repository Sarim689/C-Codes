#include <stdio.h>
int fact(unsigned int);
int main(){
	unsigned int x;
	printf("enter a positive no.: ");
	scanf("%u",&x);
	int result=fact(x);
	printf("factorial of %u is %u\n",x,result);
	return 0;
}
int fact(unsigned int n)
{
	if(n==0||n==1)
		return 1;
	return n*fact(n-1);
}
