#include <stdio.h>

int main() {
    int numbers[5];

   
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
