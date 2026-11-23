#include <stdio.h>
int add(int,int);
int diff(int,int);
int main(){
	int x,y;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&x,&y);
	int (*fn)(int,int);
	fn=add;
	printf("Result=%d\n",fn(x,y));
	fn=diff;
	printf("Result=%d\n",fn(x,y));
	return 0;
}
int add(int p, int q){
	return p+q;
}
int diff(int a,int b){
	return (a>=b)?(a-b):(b-a);
}
