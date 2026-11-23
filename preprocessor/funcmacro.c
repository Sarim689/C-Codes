#include<stdio.h>
#define MUL(X,Y) ((X)*(Y))
int main(int argc,char* argv[]){
	int r1=MUL(2,5);
	int r2=MUL(2+5,3+6);
	printf("result1=%d\n",r1);
	printf("result2=%d\n",r2);
	return 0;
}
