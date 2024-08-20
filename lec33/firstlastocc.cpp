#include <iostream>
#include <vector>

using namespace std;

int findFirstIndex(const vector<int>& arr, int target, int start, int right) {
    if (start > right) {
        // Base case: Target not found
        return -1;
    }

    int mid = start + (right - start) / 2;

    if (arr[mid] == target && (mid == 0 || arr[mid - 1] < target)) {
        // Base case: Found the first occurrence
        return mid;
    } else if (arr[mid] < target) {
        // Recursive case: Search in the right half
        return findFirstIndex(arr, target, mid + 1, right);
    } else {
        // Recursive case: Search in the start half
        return findFirstIndex(arr, target, start, mid - 1);
    }
}

int findLastIndex(const vector<int>& arr, int target, int start, int right) {
    if (start > right) {
        // Base case: Target not found
        return -1;
    }

    int mid = start + (right - start) / 2;

    if (arr[mid] == target && (mid == arr.size() - 1 || arr[mid + 1] > target)) {
        // Base case: Found the last occurrence
        return mid;
    } else if (arr[mid] > target) {
        // Recursive case: Search in the start half
        return findLastIndex(arr, target, start, mid - 1);
    } else {
        // Recursive case: Search in the right half
        return findLastIndex(arr, target, mid + 1, right);
    }
}

void findIndices(const vector<int>& arr, int target) {
    int firstIndex = findFirstIndex(arr, target, 0, arr.size() - 1);
    int lastIndex = findLastIndex(arr, target, 0, arr.size() - 1);

    cout << "First index of " << target << " in the array: " << firstIndex << endl;
    cout << "Last index of " << target << " in the array: " << lastIndex << endl;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 5};
    int target = 2;

    findIndices(arr, target);

    return 0;
}
