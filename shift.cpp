#include <iostream>



void array_shift(int arr[], int size, int shifts) {
    shifts = shifts % size;
    if (shifts == 0) return;

    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[(i + shifts) % size];
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

