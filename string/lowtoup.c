#include <stdio.h>
#include <string.h>
void convert(char*);
int main(){
	char str[]="lucknow";
	printf("%s\n",str);
	convert(str);
	printf("%s\n",str);
	return 0;
}
void convert(char* str){
	int i;
	for(i=0;i<strlen(str);i++){
		if((str[i]>=97)&&(str[i]<=122))
			str[i]=str[i]^32;	/*	name[i]=name[i]-32;	*/
	}
}
