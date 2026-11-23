#include <stdio.h>
#include <string.h>
char* addrof(char*,char);
int indexof(char*,char);
int main(){
	char* name="Lucknow Junction";
	char ch='n';
	char* addr=addrof(name,ch);
	int index=indexof(name,ch);
	printf("%d\n",addr);
	printf("%d\n",index);
	return 0;
}
char* addrof(char* s,char ch){
	while(*s!='\0'){
		if(*s==ch)
			return s;
		s++;
	}
	return NULL;
}
int indexof(char* s,char ch){
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]==ch)
			return i;
	}
	return -1;
}
