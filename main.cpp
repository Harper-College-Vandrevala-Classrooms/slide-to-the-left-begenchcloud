#include <iostream>
#include <cassert>
#include "shift.cpp"

using namespace std;

int main() {

    int arr1[] = {1, 2, 3, 4, 5};
    array_shift(arr1, 5, 1); 
    assert((arr1[0] == 2 && arr1[1] == 3 && arr1[2] == 4 && arr1[3] == 5 && arr1[4] == 1));
    
    array_shift(arr1, 5, 1);
    assert((arr1[0] == 3 && arr1[1] == 4 && arr1[2] == 5 && arr1[3] == 1 && arr1[4] == 2));

    int arr2[] = {1, 2, 3, 4, 5};
    array_shift(arr2, 5, 3);
    assert((arr2[0] == 4 && arr2[1] == 5 && arr2[2] == 1 && arr2[3] == 2 && arr2[4] == 3));

    int arr3[] = {1, 2, 3};
    array_shift(arr3, 3, 3); 
    assert((arr3[0] == 1 && arr3[1] == 2 && arr3[2] == 3));

    array_shift(arr3, 3, 4);
    assert((arr3[0] == 2 && arr3[1] == 3 && arr3[2] == 1));

    cout << "All tests passed!\n";

    return 0;
}