#include <stdio.h>
#include <stdlib.h>

// Function to merge two arrays and sort the result
void mergeArrays(int* arr1, int n1, int* arr2, int n2, int* arr3) {
    int i = 0, j = 0, k = 0;

    // Traverse arr1 and insert its elements into arr3
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    // Traverse arr2 and insert its elements into arr3
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }

    // Sort the entire arr3
    qsort(arr3, n1 + n2, sizeof(int), [](const void* a, const void* b) {
        return (*(int*)a - *(int*)b);
    });
}

// Driver code
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, arr3);

    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", arr3[i]);

    return 0;
}