//to read number until user wants and calcualte the averageof the entered numbers and also check wheather the entered number is prime or not

#include<stdio.h>
void chkPrime(int n){
    int i;
    int c2=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c2++;
        }
    }
    if (c2==2)
    {
        printf("%d is prime number",n);
    }

}
int main(){
    int n;int sum=0;int count=0;
    char c;
    do
    {
        printf("enter a number");
        scanf("%d",&n);
        chkPrime(n);
        sum+=n;
        printf("Do you want to continue?(Y/N)");           
        scanf(" %c",&c);  //a space to avoid reading any leftover spaces due to buffer 
        count++;
    } while (c=='y'||c=='Y');
    
    float avg= (float)sum/count;
    printf("average = %f",avg);
}