#include <stdio.h>
int main(){
	int arr[]={2,3,7,9,5,8};
	int i;
	int len=sizeof(arr)/sizeof(arr[0]);
	int* p=&arr[0];
/*	printf("%d\n",*p);
	p++;
	printf("%d\n",*p);	*/
	printf("%d\n",*++p);
	printf("%d\n",*p++);
	printf("%d\n",++*p);
	printf("%d\n",*p++);
	printf("%d\n",*p);
/*	for(i=0;i<len;i++)
		printf("%d\t",p[i]);
	printf("\n");	*/
}
