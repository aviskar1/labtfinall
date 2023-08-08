#include<stdio.h>
#define ROW 3
#define COL 3
int main(){
	int arr[ROW][COL];
	int i,j;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("\nEnter element (%d %d)",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
}

