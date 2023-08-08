#include<stdio.h>
int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	int *p;
	p = &arr[0];
//	int sum=0;
//	for(i=0;i<10;i++){
//		sum+=*(p+i);
//	}
	
	int temp;
	int j;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(*(p+i)>*(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d\n",*(p+i));
	}
	
//	printf("%d",sum);
	return 0;
}
