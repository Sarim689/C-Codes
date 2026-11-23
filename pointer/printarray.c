#include <stdio.h>
void printer(int* a,int);
int main(){
	int arr[]={3,5,7,9,6,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	printer(arr,len);
	return 0;
}
void printer(int* a,int length){
	int i;
	for(i=0;i<length;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
