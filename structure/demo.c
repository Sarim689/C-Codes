#include <stdio.h>
int main(){
	struct student{
		char* name;
		int age;
		char gender;
	}istud={"Sarim Siddiqui",21,'M'};
/*	struct student istud;	*/
/*	istud.name="Sarim Siddiqui";
	istud.age=20;
	istud.gender='M';	*/
	printf("name=%s\n",istud.name);
	printf("age=%d\n",istud.age);
	printf("gender=%c\n",istud.gender);
}
