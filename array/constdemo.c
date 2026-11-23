#include <stdio.h>
int main(){
	int x=20;
/*	const int* p=&x;	*/
/*	int* const p=&x;	*/
	const int* const p=&x;
	printf("x=%d\t x=%d\n",x,*p);
	x=40;
/*	*p=45;			*/
	printf("x=%d\tx=%d\n",x,*p);
/*	int k=50;
	p=&k;
	printf("x=%d\tk=%d\n",x,*p);	*/
}
