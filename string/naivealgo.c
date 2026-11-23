#include <stdio.h>
#include <string.h>
int naivealgo(char*,char*);
int main(){
	char str[]="Lucknow Junction EAST";
	char ptr[]="ncti";
	int result=naivealgo(str,ptr);
	if(result==-1)
		printf("not found");
	else
		printf("found at %d",result);
	return 0;
}
int naivealgo(char* str,char* ptr){
	int index=-1;
	int lens=strlen(str);
	int lenp=strlen(ptr);
	int i,j;
	for(i=0;i<=(lens-lenp);i++){
		if(ptr[0]==str[i]){
			for(j=1;j<lenp;j++){
				if(ptr[j]!=str[i+j])
					break;
			}
			if(j==lenp){
				index=i;
				break;
			}
		}
	}
	return index;
}

