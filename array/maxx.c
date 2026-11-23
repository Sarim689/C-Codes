#include <stdio.h>
int maxsubarray(int*,int);
int maxsubarray(int* a,int len){
	int i,j,sum=0,max;
	for(i=0;i<len;i++){
		if(a[i]>=0)
			sum+=a[i];
			max=sum;
	}
	return max;
}
void sort(int* a,int len){
	int temp,flag;
	int i,j;
	for(i=0;i<len;i++){
		flag=0;
		for(j=1;j<len-i+1;j++){
			if(a[j]<a[j-1]){
				flag=1;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		if(flag==0) break;
	}
}
int main(){
	int arr[]={2,-3,5,-6,7,1};
	int l=sizeof(arr)/sizeof(arr[0]);
	sort(arr,l);
	int result=maxsubarray(arr,l);
	printf("max n=%d\n",result);
	return 0;
}
