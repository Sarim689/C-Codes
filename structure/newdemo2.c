#include <stdio.h>
int main(int argc,char* argv[]){
	typedef struct {
		char* name;
		int age;
		char gender;
	}student;
	student *sp;
	student stu;
	sp=&stu;
	stu.name="Sarim Siddiqui";
	sp->age=52;
	stu.gender='M';
	printf("name=%s\n",sp->name);
	printf("age=%d\n",stu.age);
	printf("gender=%c\n",sp->gender);
	return 0;
}
