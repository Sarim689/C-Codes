#include <stdio.h>
#include <string.h>
int main(){
	char name[50]="Lucknow";
	char* cityname="Kanpur City";
	char* s=strcpy(name,cityname);
	printf("%s\n",name);
	char city[50]="Lucknow";
	char* s2=strncpy(city,cityname,3);
	printf("%s\n",city);
	return 0;
}
