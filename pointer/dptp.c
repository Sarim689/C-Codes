#include <stdio.h>
int main(){
	int x=10;
	int* p=&x;
	int** dp=&p;
	int*** tp=&dp;
	printf("%d\n",***tp);
	***tp=20;
	printf("%d\n",***tp);
	return 0;
}
