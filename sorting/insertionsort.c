#include <stdio.h>
void insertionsort(int*,int);
void printarray(int*,int);
void insertionsort(int* a,int len){
	int i,j;
	int temp;
	for(i=1;i<len;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j]){
				a[j+1]=a[j];
				j--;
		}
		a[j+1]=temp;
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
	printf("Array before sorting:\n");
	printarray(arr,len);
	insertionsort(arr,len);
	printf("Array after sorting:\n");
	printarray(arr,len);
}
