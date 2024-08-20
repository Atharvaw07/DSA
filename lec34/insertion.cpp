#include <iostream>
using namespace std;

void insertionSortRecursive(int arr[], int n) {
    // Base case: if the array has only one element or is empty, it is already sorted
    if (n <= 1) {
        return;
    }

    // Sort the first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert the last element at the correct position in the sorted part
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of the sorted part that are greater than last, one position ahead
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Insert the last element at its correct position
    arr[j + 1] = last;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    insertionSortRecursive(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
