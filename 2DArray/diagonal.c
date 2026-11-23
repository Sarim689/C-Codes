#include <stdio.h>
int main(){
	int td[4][4]={{1,2,3,4},{5,6,4,8},{9,15,10,12},{10,20,30,40}};
	int i,j,sump=0,sums=0;
	for(i=0;i<4;i++){
		sump+=td[i][i];
		sums+=td[i][3-i];
	}
	printf("Sum of Primary diagonal=%d\n",sump);
	printf("Sum of Secondary diagonal=%d\n",sums);
}
