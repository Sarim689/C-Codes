#include <stdio.h>
#include <string.h>
int main(){
	char name[50]="Lucknow";
 	char* sname="Junction";
	char* s=strcat(name,sname);
	if(s!=NULL)
		printf("%s\n",s);
	return 0;
}
