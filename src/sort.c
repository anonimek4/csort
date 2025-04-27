#include "sort.h"
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int swapped = 0;

        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
                swapped = 1;
            }
        }
        
        if (!swapped) {
            break;
        }
    }
}