#include <stdio.h>

int main() {
    int arr[100], n, freq[100], counted[100], countIndex = 0;

    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

   
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }

    
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count; 
        }
    }

    
    printf("Number - Frequency:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d - %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
