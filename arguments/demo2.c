#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[]){
	if(argv[1]==NULL){
		printf("Correct useage:<cmd><args...>\n");
		return 0;
	}
	int i=1;
	while(argv[i]!=NULL){
		printf("Arg [%d] is %s\n",i,argv[i]);
		i++;
	}
	return 0;
}
