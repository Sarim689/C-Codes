#include <stdio.h>
void display();
void show();
int main(){
	auto int x=10;
	printf("x=%d\n",x);
	display();
	show();
	return 0;
}
void display(){
	auto int a=40;
	printf("a=%d\n",a);
}
void show(){
	auto int b;
	printf("b=%d\n",b);
}
