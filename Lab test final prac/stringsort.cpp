#include<stdio.h>
#include<string.h>
void sort(char str[][100]){
	int i,j;
	char temp[100];
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	
	for (i=0;i<5;i++){
		printf("%s\n",str[i]);
	}
}
int main(){
	char str[5][100];
	int i;
	for(i=0;i<5;i++){
		printf("Enter any string");
		scanf("%s",str[i]);
	}
	fflush(stdin);
	sort(str);
	return 0;
}



//#include <stdio.h>
//#include <string.h>
//
//void sort(char str[][100], int size) {
//    int i, j;
//    char temp[100];
//    
//    for (i = 0; i < size - 1; i++) {
//        for (j = i + 1; j < size; j++) {
//            if (strcmp(str[i], str[j]) > 0) {
//                strcpy(temp, str[i]);
//                strcpy(str[i], str[j]);
//                strcpy(str[j], temp);
//            }
//        }
//    }
//
//    for (i = 0; i < size; i++) {
//        printf("%s\n", str[i]);
//    }
//}
//
//int main() {
//    char str[5][100];
//    int i;
//
//    for (i = 0; i < 5; i++) {
//        printf("Enter any string: ");
//        scanf("%s", str[i]);
//    }
//
//    sort(str, 5);
//
//    return 0;
//}

