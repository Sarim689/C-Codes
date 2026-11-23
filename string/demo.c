#include <stdio.h>
#include <string.h>
int strlenn(char*);
int main(){
	char* name="Luck\0now";
	char city[]="Kanpur";
	printf("name=%s\n",name);
	printf("city=%s\n",city);
/*	city[0]='N';
	printf("city=%s\n",city);	*/
	printf("citylen=%d\n",strlenn(city));
	printf("namelen=%d\n",strlenn(name));
/*	name="Jaunpur";
	printf("name=%s\n",name);	*/
	return 0;
}
int strlenn(char* s){
	int len=-1;
	while(s[++len]!='\0');
	return len;
}
