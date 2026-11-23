#include <stdio.h>
#include <string.h>
void freq(char*);
int main(){
	/*char* str="Lucknow Junction";*/
	char str[64];
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	freq(str);
	return 0;
}
void freq(char* str){
/*	int c=0;
	int i,j;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' ')
			continue;
		c=0;
		for(j=0;j<strlen(str);j++){
			if(str[i]==str[j]){
				if(j<i)
					break;
				c++;
			}
		}
		if(c>0)
			printf("%c  %d\n",str[i],c);
	}	*/

	int freqq[128]={0};
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' ')continue;
		freqq[str[i]]++;
	}
	for(i=0;i<128;i++){
		if(freqq[i]>0)
			printf("%c   %d\n",(char)i,freqq[i]);
	}
}
