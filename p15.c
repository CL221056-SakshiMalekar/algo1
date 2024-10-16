#include <stdio.h>

void printIncreasingPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j <= i + 1) {
                printf("%d", j);
            } else {
                printf("5");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printIncreasingPattern(rows);
    
    return 0;
}
