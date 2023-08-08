#include<stdio.h>
int sod(int n){
	if(n==0){
		return 0;
	}
	else{
		return n%10 + sod(n/10);	
	}
}
int main(){
	int a;
	printf("enter a digit = ");
	scanf("%d",&a);
	int sum = sod(a);
	printf("%d",sum);
	return 0;
	
}
