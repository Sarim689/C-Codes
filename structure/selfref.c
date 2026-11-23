#include<stdio.h>
#include<stdlib.h>
int main(){
	struct student{
		char* name;
		int age;
		struct student* sp;
	};
	struct student first;
	struct student second;
	struct student *head=&first;
	first.name="Sarim Siddiqui";
	first.age=20;
	first.sp=&second;
	second.name="Adeel Ahmad";
	second.age=21;
	second.sp=NULL;
	printf("%d\n",head->age);
	printf("%d\n",head->sp->age);
	printf("%d\n",(int)sizeof(first));
	printf("%d\n",(int)sizeof(second));
	return 0;
}
