#include<stdio.h>
int fibo(int n)
{
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
//	else if(n==2){
//		return 2;
//	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int a;
	printf("Enter the range for fibonacci: ");
	scanf("%d",&a);
	int i;
	for(i=0;i<a;i++){
		printf("%d",fibo(i));
	}
	return 0;
	
}
