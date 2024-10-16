#include <stdio.h>

void printHalfDiamond(int columns) {
    // Upper part of the half diamond
    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the half diamond
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
