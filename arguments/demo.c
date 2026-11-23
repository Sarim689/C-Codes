#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[]){
	if(argc==1){
		printf("Correct useage:<cmd><args...>\n");
		return 0;
	}
	int i;
	for(i=1;i<argc;i++){
		printf("Arg [%d] is %s\n",i,argv[i]);
	}
	return 0;
}
