//
// Created by User on 27/03/2023.
//
#include <stdio.h>

int *minptr(int a[]) {
    int min = a[0];
    int *ptr = &a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] < min) {
            min = a[i];
            ptr = &a[i];
        }
    }
    *ptr = -1;
    return ptr;
}
int main() {
    int arr[5] = { 85, 56, 23, 89, 101 };

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *ptr = minptr(arr);

    printf("Minimum element: %d\n", *ptr);

    printf("Updated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}