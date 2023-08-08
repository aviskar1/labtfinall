#include<stdio.h>
#include<conio.h>
#include<math.h>

int sumof(int n){
	if (n==0){
		return 0;
	}
	
	else{
		return (n%10) + sumof(n/10);
	}
}
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	int rem,temp;
	int noofdig=0;
	temp =a;
	while(temp!=0){
		temp/=10;
		noofdig++;
	}
	temp =a;
	int arm;
	while(temp!=0){
		rem=temp%10;
		arm+=pow(rem,noofdig);
		temp/=10;
	}
	
	if(arm==a){
		printf("armstrong no");
	}
	
	
	int sum = sumof(a);
	printf("Sum = %d",sum);
	return 0;
	
}
