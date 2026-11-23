#include <stdio.h>
int fact(unsigned int);
int main(){
	unsigned int x;
	printf("enter a no.: ");
	scanf("%u",&x);
	int result=fact(x);
	printf("factorial=%d\n",result);
	return 0;
}
int fact(unsigned int n){
	int result=1;
	int i;
	for(i=2;i<=n;i++)
		result=result*i;
	return result;
}

