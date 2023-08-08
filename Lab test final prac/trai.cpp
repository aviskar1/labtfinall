#include<stdio.h>
#include<string.h>
struct Person{
	char n[20];
	int age;
};

int main(int argc, char *argv[]){
	struct Person people[100];
	struct Person *pPerson = people;
	int i;
	for(i=0;i<100;i++){
		pPerson->age=0;
		pPerson+=1;
		strcpy(pPerson->n," avi");
		
		printf("%d\n%s\n\n",pPerson->age,pPerson->n);
	}
	
	return 0;
}
