#include <stdio.h>
void bs(int*,int);
void print(int*,int);
void bs(int* a,int len){
	int temp,flag;
	int i,j;
	for(i=1;i<len;i++){
		flag=0;
		for(j=1;j<len-i+1;j++){
			if(a[j]<a[j-1]){
				flag++;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		if(flag==0)
			break;
	}
}
void print(int* a,int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int main(){
	int arr[]={5,3,2,8,6,4,1};
	int len=sizeof(arr)/sizeof(arr[0]);
	print(arr,len);
	bs(arr,len);
	printf("Array after sorting\n");
	print(arr,len);
}

