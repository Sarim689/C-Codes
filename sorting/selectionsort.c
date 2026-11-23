#include <stdio.h>
void selectionsort(int*,int);
void printarray(int*,int);
void selectionsort(int* a,int len){
	int temp,index;
	int i,j;
	for(i=1;i<len;i++){
		index=i-1;
		for(j=i;j<len;j++){
			if(a[j]<a[index]) index=j;
		}
		temp=a[i-1];
		a[i-1]=a[index];
		a[index]=temp;
	}
}

void printarray(int* a,int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

int main(){
	int arr[]={5,3,2,7,6,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	printarray(arr,len);
	selectionsort(arr,len);
	printf("Array after sorting:\n");
	printarray(arr,len);
}
