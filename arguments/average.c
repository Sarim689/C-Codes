#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
	if(argv[1]==NULL){
		printf("Correct useage:<cmd><args...>\n");
		return 0;
	}
	int i=1;
	int sum=0;
	for(i=1;i<argc;i++){
		sum+=atof(argv[i]);
	}
	float avg=(float)sum/(argc-1);
	printf("Average=%f\n",avg);
	return 0;
}
