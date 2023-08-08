//use of switch case and squareroot of number

#include<stdio.h>
#include<math.h>
void sqq(int a){
    int square;
    square= sqrt(a);
    printf("%d",square);
}
int main(){
    int a=3,b=5;
    char c;
    printf("Enter what you want to do (+/-)");
    scanf(" %c",&c);
    int sum;
    switch (c)
    {
    case '+':
        sum=a+b;
        break;
    
    case '-':
        sum=a-b;
        break;
    
    default:
        printf("nonono");
        break;
    }

    printf("%d",sum);

    int n;
    printf("Enter a number");
    scanf("%d",&n);

    sqq(n);

    return 0;

}