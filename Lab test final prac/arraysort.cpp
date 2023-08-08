#include<stdio.h>
void sort(int arr[]){
	int i,temp;int j;
	for (i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[j]>arr[i]){
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}	
		}
		
		
	}
	
	for (i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int arr[10];
	int i;
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr);
	return 0;
}
