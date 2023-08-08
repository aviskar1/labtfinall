#include <stdio.h>
#include <string.h>

void sort(char str[][100]) {
    int i, j;
    char temp[100];
    
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }
}

int main() {
    char str[5][100];
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Enter any string: ");
        scanf("%s", str[i]);
        
        // Clear input buffer after scanf
        while ((getchar()) != '\n');
    }
    
    sort(str);
    
    return 0;
}
