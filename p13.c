#include <stdio.h>

void printAlternatingNumbers(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {  // Even row: print ascending
            for (int j = 1; j <= columns; j++) {
                printf("%d", j);
            }
        } else {  // Odd row: print descending
            for (int j = columns; j >= 1; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    
    printAlternatingNumbers(rows, columns);
    
    return 0;
}
