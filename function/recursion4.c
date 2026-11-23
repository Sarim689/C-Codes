#include <stdio.h>
int sum(unsigned int n){
	int result=0;
	int i;
	for(i=1;i<=n;i++)
		result=result+i;
	return result;
}
int main(){
	unsigned int x;
	printf("enter a no.: ");
	scanf("%u",&x);
	int result=sum(x);
	printf("sum=%u",result);
	return 0;
}
