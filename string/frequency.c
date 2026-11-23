#include <stdio.h>
#include <string.h>
int main(){
	char* name="Lucknow Junction";
	int i,j,c;
	for(i=0;i<strlen(name);i++){
		if(name[i]==' ') continue;
		c=0;
		for(j=0;j<strlen(name);j++){
			if(name[i]==name[j]){
				if(j<i) goto ab;
				c++;
			}
		}
		printf("%c is %d times\n",name[i],c);
		ab:
	}
	return 0;
}
