#include <stdio.h>
int main(){
	int arr[]={1,3,6,3,7,8,22,55,88,34,77,56,89,69,23,5,80,10};
	int len=sizeof(arr)/sizeof(arr[0]);
	int search;
	printf("enter an element to search: ");
	scanf("%d",&search);
	int z=linearSearch(arr,len,search);
	if(z==-1)
		printf("element not found\n");
	else
		printf("found at %d",z);
	return 0;
}
int linearSearch(int *a, int len ,int elm){
	int result=-1;
	int i;
	for(i=0;i<len;i++){
		if(a[i]==elm){
			result=i;
			break;
		}
	}
	return result;
}
