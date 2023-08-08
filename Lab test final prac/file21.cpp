//Write a C program to store employee details in a text file. Read data from the text file, sort them in ascending order of salary and store the sorted record to a binary file. Display the details and rank of employee given by the user.


#include<stdio.h>
#include<string.h>
struct emp{
	char n[20];
	int sal;
};
int main(){
	struct emp e[3];
	FILE *fptr;
	fptr = fopen("details.txt","w+");
	int i;
	for(i=0;i<3;i++){
		printf("Enter employees name:");
		gets(e[i].n);
		printf("Enter salary");
		scanf("%d",&e[i].sal);
		fflush(stdin);
	}
	
	fwrite(e,sizeof(struct emp),3,fptr);
	rewind(fptr);
	fread(e, sizeof(struct emp), 3, fptr);
	int j;
	for(i=0;i<3;i++){
		for (j=i+1;j<3;j++){
			if(e[j].sal>e[i].sal){
				struct emp temp=e[j];
				e[j]=e[i];
				e[i]=temp;	
			}
			

		}
	}
	fclose(fptr);
	
	FILE *fptr2;
	fptr2=fopen("new.bin","w+");
	fwrite(e,sizeof(struct emp),3,fptr2);

	

    //int i;
    for (i = 0; i < 3; i++) {
        printf("Employee Name: %s\n", e[i].n);
        printf("Salary: %d\n", e[i].sal);
    }
    
    fclose(fptr2);
	return 0;
}
