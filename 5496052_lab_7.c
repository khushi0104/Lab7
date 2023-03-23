#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp = *x; 
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j+1] < arr[j]) {
                swap(&arr[j+1], &arr[j]);
                count++;
            }
        }
        printf("Index %d: %d swaps\n", i, count);
    }
}

int main() {
    int arr[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};

    bubbleSort(arr, 9);
}