#include <stdio.h>
struct student{
	char* name;
	int age;
	char gender;
}istud={"Sarim Siddiqui",21,'M'};
int main(int argc,char*argv[]){
/*	struct student istud;
	istud.name="Sarim Siddiqui";
	istud.age=20;
	istud.gender='M';	*/
	printf("name=%s\n",istud.name);
	printf("age=%d\n",istud.age);
	printf("gender=%c\n",istud.gender);
	printf("size=%d\n",(int)sizeof(istud));
	return 0;
}
