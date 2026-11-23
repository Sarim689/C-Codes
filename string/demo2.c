#include <stdio.h>
#include <string.h>
int main(){
	char* name="Lucknow";
	char city[]="Kanpur";
/*	int len=-1;
	while(name[++len]!='\0');	*/
	printf("Lengthname=%d\n",strlen(name));
	printf("Lengthcity=%d\n",strlen(city));
	return 0;
}
