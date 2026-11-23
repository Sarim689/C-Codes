#include <stdio.h>
#include <string.h>
void revstring(char*);
int main(){
	char str[]="lucknow";
	printf("original string= %s\n",str);
	revstring(str);
	printf("reverse string= %s\n",str);
	return 0;
}
void revstring(char* str){
	int i=0;
	int j=strlen(str)-1;
	char rev;
	while(i<j){
		rev=str[i];
		str[i]=str[j];
		str[j]=rev;
		i++;
		j--;
	}
}
