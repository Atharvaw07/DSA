#include <iostream>
using namespace std;

void sortArray(int *arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int minIndex = start;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[start], arr[minIndex]);

    // recusive call
    sortArray(arr, start + 1, end);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {10, 1, 7, 8, 14, 9};
    int n = sizeof(arr) / sizeof(int);

    sortArray(arr, 0, n - 1);
    printArray(arr, 6);

    return 0;
}