#include <stdio.h>
int binarysearch(int*,int,int,int);
int main(){
	int arr[]={1,2,3,4,13,23,45,57,60};
	int len=sizeof(arr)/sizeof(arr[0]);
	int data;
	printf("eneter no. to search: ");
	scanf("%d",&data);
	int index=binarysearch(arr,len,data,);
	if(index==-1)
		printf("not found");
	else
		printf("found at %d\n",index);
	return 0;
}
int binarysearch(int* a,int low,int high,int data){
	if(low<=high){
		int mid=(low+high)/2;
		if(data==a[mid])
			return mid;
		else if(data<a[mid])
			return binarysearch(a,low,mid-1,data);
		else
			return binarysearch(a,mid+1,high,data);
	}
	else
		return -1;
}
