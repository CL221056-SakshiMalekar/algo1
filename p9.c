#include <stdio.h>

void printParallelogram(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < columns; k++) {
            printf("*");
        }
        printf("\n")
