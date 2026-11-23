#include <stdio.h>
int main(){
	int mtx[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row=sizeof(mtx)/sizeof(mtx[0]);
	int col=sizeof(mtx[0])/sizeof(mtx[0][0]);
	int i,j,temp;
	printf("Orig array:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mtx[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<row;i++){
		for(j=0;j<i;j++){
			temp=mtx[i][j];
			mtx[i][j]=mtx[j][i];
			mtx[j][i]=temp;
		}
	}
	printf("Transpose:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mtx[i][j]);
		}
	printf("\n");
	}
	return 0;
}
