#include <stdio.h>
#include <string.h>
int main(){
	char* s1="Lucknow";
	char* s2="Lakhimpur";
	char* s3="Lucknow";
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",strcmp(s2,s1));
	printf("%d\n",strcmp(s1,s3));
	return 0;
}
