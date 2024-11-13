#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, i, even = 0, odd = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Return if memory allocation fails
    }

    printf("\nEnter the %d elements of the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("\nThe given array contains %d odd numbers and %d even numbers.\n", odd, even);

    // Free the allocated memory
    free(arr);

    return 0;
}
