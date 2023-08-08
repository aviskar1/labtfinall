//find largest and smallest element of array

#include<stdio.h>
void ls(int array[]){
	int larger,smaller;
	int i;
	larger = array[0];
	for(i=0;i<10;i++){
		if(array[i]>larger){
			larger=array[i];
		}
		
	}
	i=0;
	smaller = array[i];
	for(i=0;i<10;i++){
		if(array[i]<smaller){
			smaller = array[i];
		}
	}
	printf("%d is the largest element and %d is the smallest ",larger,smaller);
	
}
int main(){
	int n1,n2;
	printf("Enter any two numbers");
	scanf("%d%d",&n1,&n2);
	if(n1>n2){
		printf("%d is larger",n1);
	}
	else{
		printf("%d is larger",n2);
	}
	int arr[10];
	int i;
	printf("Enter numbers \n");
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	ls(arr);
	
	
}
