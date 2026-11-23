#include <stdio.h>
#include <string.h>
void convert(char*);
int main(){
	char str[]="lucknow";
	printf("original string= %s\n",str);
	convert(str);
	printf("reverse string= %s\n",str);
	return 0;
}
void convert(char* str){
	char rev;
	int len=strlen(str)-1;
	int i;
	for(i=0;i<=len;i++){
		rev=str[i];
		str[i]=str[len];
		str[len]=rev;
		len--;
	}
}
