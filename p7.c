#include <stdio.h>

int main() {
    int arr[100], n, unique[100], uniqueCount = 0;

   
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

   
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount++] = arr[i];
        }
    }

   
    printf("Unique numbers in the array: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
