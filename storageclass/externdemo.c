#include <stdio.h>
void display();
extern int x;
int main(){
	printf("x=%d\n",x);
	display();
	return 0;
}
void display(){
	printf("x=%d\n",x);
}
