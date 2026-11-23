#include <stdio.h>
int naivesearch(char*,char*);
int naivesearch(char* str, char* pattern){
	int lens=strlen(str);
	int lenp=strlen(pattern);
	int i,j;
	for(i=0;i<=(lens-lenp);i++){
		if(pattern[0]==str[i]){
			for(j=1;j<lenp;j++){
				if(str[i+j]!=pattern[j]) break;
			}
			if(j==lenp) return i;
		}
	}
	return -1;
}
int main(){
	char str[]="Lucknow Junction EAST";
	char pattern[]="ncti";
	int index=naivesearch(str,pattern);
	if(index==-1)
		printf("NOT FOUND");
	else
		printf("Found at %d",index);
	return 0;
}
