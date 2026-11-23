#include <stdio.h>
#include <string.h>
int main(){
	char str[50]="Lucknow Junction";
	char* s=strchr(str,'n');
	if(s!=NULL)
		printf("%s\n",s);
	return 0;
}
