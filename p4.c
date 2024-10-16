#include <stdio.h>

int main() {
    int numbers[7];

    // Taking input from the user
    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Reversing the order of numbers
    printf("Reversed order of numbers: ");
    for (int i = 6; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
