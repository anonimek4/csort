#include "sort.h"

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

void selection_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < size; j++) {
            if (*(arr + j) < *(arr + min_idx)) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            swap(arr + i, arr + min_idx);
        }
    }
}