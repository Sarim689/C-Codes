#include <stdio.h>
#include <stdlib.h>
struct student{
	char* name;
	int age;
	char gender;
};
int main(){
	struct student* ist=(struct student*)malloc(sizeof(struct student));
	ist->name="Sarim Siddiqui";
	ist->age=52;
	ist->gender='M';
	printf("name=%s\n",ist->name);
	printf("age=%d\n",ist->age);
	printf("gender=%c\n",ist->gender);
	return 0;
}
