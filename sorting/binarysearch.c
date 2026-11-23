#include <stdio.h>
int bs(int*a,int low,int high,int data){
	if(low<=high){
		int mid=(low+high)/2;
		if(data==a[mid])
			return mid;
		else if(data<a[mid])
			return bs(a,low,mid-1,data);
		else
			return bs(a,mid+1,high,data);
	}
	else
		return -1;
}
int main(){
	int arr[]={2,3,4,5,6,7,8,9};
	int len=sizeof(arr)/sizeof(arr[0]);
	int data;
	int lo=0;
	int hi=len-1;
	printf("Enter no. to search: ");
	scanf("%d",&data);
	int index=bs(arr,lo,hi,data);
	if(index==-1)
		printf("NOT FOUND");
	else
		printf("FOUND AT %d\n", index);
	return 0;
}
