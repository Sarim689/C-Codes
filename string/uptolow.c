#include <stdio.h>
#include <string.h>
void convert(char*);
int main(){
	char str[]="LUCKNOW";
	printf("%s\n",str);
	convert(str);
	printf("%s\n",str);
	return 0;
}
void convert(char* str){
	int i;
	for(i=0;i<strlen(str);i++){
		str[i]=str[i]|32;
	}
}
