#include <stdio.h>
#include <stdlib.h>
struct student{
	char* name;
	struct address{
		char* city;
		int pin;
	}*p;			/*in this program we have tried using pointer but in my device its not working,
					 and in other device, and os it is working. we will check this program later  */
};
int main(int argc,char* argv[]){
	printf("1\n");
	struct student stu;
	printf("2\n");
	stu.name="Sarim Siddiqui";
	printf("3\n");
	stu.p->city="Lucknow";
	printf("4\n");
	stu.p->pin=221004;
	printf("%d\n",(int)sizeof(stu));
	printf("name=%s\n",stu.name);
	printf("city=%s\n",stu.p->city);
	printf("pin=%d\n",stu.p->pin);
	return 0;
}
