#include<stdio.h>
int fact(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}
int main(){
	int a;
	printf("Enter a = ");
	scanf("%d",&a);
	int fa;
	fa = fact(a);
	printf("%d",fa);
	return 0;
}
