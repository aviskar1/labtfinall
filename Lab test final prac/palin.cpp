//string palindrome checker and word counter

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter a word");
	scanf("%s",str);
	int i;
	int stat = -1;
	int len = strlen(str);
	for(i=0;i<=len/2;i++){
		if(str[i]!=str[len-i-1]){
			stat=0;
			break;
		}
	}
	
	if(stat==0){
		printf("Not Palindrome");
	}
	else{
		printf("Palindrome");
	}
	int len2;
	int c=0;
	char str2[100];
	printf("Enter another string to count no of words:");
	fflush(stdin);
	gets(str2);
	len2 = strlen(str2);
	
	
	
	for (i=0;i<len2;i++){
		if(str2[i]==' '|| str2[i]=='\0'){
			c++;
		}
		
	}
	c++;
	
	printf("%d",c);
}
