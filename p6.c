#include <stdio.h>

int main() {
    int arr[100], n, search, index = -1;

    // Input number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search
    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Search for the number
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            index = i;
            break;
        }
    }

    // Print the result
    if (index != -1) {
        printf("The first occurrence of %d is at index: %d\n", search, index);
    } else {
        printf("-1\n");
    }

    return 0;
}
