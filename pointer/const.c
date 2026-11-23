#include <stdio.h>
int main(){
	const int x=10;
	int y=20;
	int* p=&x;
	const int* q=&x;
	int* const r=&x;
	const int* const s=&x;
	*p=69;
	printf("x=%d\n",x);
	*r=6969;
	printf("x=%d\n",x);
	return 0;
}
