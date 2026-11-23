#include <stdio.h>
int main(){
	int x=10;
	static int y;
	y=x;
	printf("y=%d\n",y);
	return 0;
}
