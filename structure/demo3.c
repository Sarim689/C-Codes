#include <stdio.h>
struct student{
	char gender;
	char* name;
	int age;
};
int main(){
	struct student istud={'M',"sarim",20};
	struct student bstud={'F',"ladki",20};
	printf("%d\n",(int)sizeof(bstud));
	printf("%d\n",(int)sizeof(struct student));
}
