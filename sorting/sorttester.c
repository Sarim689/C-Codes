#include "sortheader.h"
#include <stdio.h>
void printer(int*,int);
int main(){
	int arr[]={3,2,5,4,9,7,6};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Original Array:\n");
	printer(arr,length);
	printf("Array in ascending order:\n");
	sort(arr,length,asc);
	printer(arr,length);
	printf("Array in descending order:\n");
	sort(arr,length,desc);
	printer(arr,length);
	return 0;
}
void printer(int*a,int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
