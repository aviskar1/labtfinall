//armstrong and sum of digitts using recursion

#include<stdio.h>
#include<math.h>

int sumofd(int n){
	if(n==0){
		return 0;
	}
	
	else{
		return (n%10)+ sumofd(n/10);
	}
}
int main (){
	int a;
	printf("enter");
	scanf("%d",&a);
	int rem,nod=0,arm;
	int temp;
	temp = a;
	while(temp!=0){
		temp/=10;
		nod++;
	}
	
	printf("%d",nod);
	
	temp = a;
	arm = 0;
	while(temp!=0){
		rem=temp%10;
		arm+=pow(rem,nod);
		temp/=10;
	}
	if(a==arm){
		printf("Armst");
	}
	
	printf("Sum of digits is %d",sumofd(a));
	
	return 0;
	
	
	
}
