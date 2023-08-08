//sum of digits using recursion

#include<stdio.h>
int sumof(int n){
	if(n==0){
		return 0;
	}
	
	else {
		return (n%10) + sumof(n/10);  // will return a single digit + call the same function with one less digit
	}
	
}

int fact(int f){
	int i;int fact=1;
	for(i =1;i<=f;i++){
		fact*=i;
	}
	printf("Factorial = %d",fact);
}
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	int sum = sumof(a);      //calling function 
	printf("Sum of the number is = %d",sum);
	fact(sum);
	return 0;
	
}
