#include<stdio.h>
int main(){
	int a,b,min,lcm,hcf;
	int i;
	a=4;
	b=6;
	min =(a<b)?a:b;
	for(i=1;i<min;i++){
		if(a%i==0&&b%i==0){
			hcf = i;
		}
	}
	lcm = (a*b)/hcf;
	printf("%d %d",lcm,hcf);
	return 0;
}
