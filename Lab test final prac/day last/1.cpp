#include<stdio.h>
int main(){
//	int a,b,res;
//	int *p;
//	p = &res;
//	res=69;
//	printf("%d",*p);
//	return 0;

	int a=5,b=5;
	char c;
	int res;
	int *p;
	p=&res;
	scanf(" %c",&c);
	switch(c){
		case '+':
			*p = a+b;
			break;
			
		case '-':
			*p = a-b;
			break;
			
		case '*':
			*p = a*b;
			break;
		
		defult:
			printf("Error");
			break;
	}
	printf("%d",*p);
	
}
