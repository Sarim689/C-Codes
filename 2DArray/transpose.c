#include <stdio.h>
void printer(int*,int,int);
int main(){
	int td[3][3]={{2,3,4},{5,7,9},{8,1,10}};
	int i,j,temp;
	int rows=sizeof(arr)/sizeof(arr[0]);
	int columns=sizeof(arr[0])/sizeof(arr[0][0]);
	printer(td,rows,columns);
/*	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",td[i][j]);
		}
	printf("\n");
	}
	printf("\n");*/
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){
			temp=td[i][j];
			td[i][j]=td[j][i];
			td[j][i]=temp;
		}
	}
/*	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",td[i][j]);
		}
	printf("\n");
	}*/
	printer(td,rows,columns);
}

void printer(int* arr,row,column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d\t",arr[row][column]);
		}
	printf("\n");
	}
}
