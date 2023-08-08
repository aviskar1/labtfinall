//area of rectangle using struct

#include<stdio.h>
struct rec{
	float len;
	float wid;
};

int main(){
	struct rec r1,r2;
	printf("Enter the length of rectangle");
	scanf("%f",&r1.len);
	printf("Enter the width of the rectangle");
	scanf("%f",&r1.wid);
	float area;
	area = r1.len*r1.wid;
	printf("Area of 1st rectangle is : %f",area);
	
	
	printf("Enter the length of rectangle");
	scanf("%f",&r2.len);
	printf("Enter the width of the rectangle");
	scanf("%f",&r2.wid);
	float area2;
	area2 = r2.len*r2.wid;
	printf("Area of 2nd rectangle is : %f",area2);
	return 0;
}
