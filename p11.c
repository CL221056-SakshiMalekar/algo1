#include <stdio.h>

void printHalfDiamond(int columns) {
   
    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = columns - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int columns;
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    
    printHalfDiamond(columns);
    
    return 0;
}
