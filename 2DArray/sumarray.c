#include <stdio.h>
int main(){
	int mtx[4][4]={{2,4,6,8},{1,3,5,7},{10,20,30,40},{11,22,33,44}};
	int row=sizeof(mtx)/sizeof(mtx[0]);
	int cols=sizeof(mtx[0])/sizeof(mtx[0][0]);
	int sum=0,sump=0,sums=0;
	int i,j;
	for(i=0;i<row;i++){
		sump+=mtx[i][i];
		sums+=mtx[i][row-i-1];
		for(j=0;j<cols;j++){
			sum+=mtx[i][j];
		}
	}
	printf("Sum of all elements=%d\n",sum);
	printf("Sum of Primary diagonal=%d\n",sump);
	printf("Sum of Secondary diagonal=%d\n",sums);
	return 0;
}
