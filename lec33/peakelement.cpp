#include <iostream>
using namespace std;

int peak(int arr[], int size, int start, int end)
{

    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] < arr[mid + 1])
    {
        return peak(arr, size, mid + 1, end);
    }
    else
    {
        return peak(arr, size, start, mid);
    }

    return peak(arr,size,0,size-1);
}



int main()
{
    int arr1[4] = {3, 4, 5, 1};
    int size = 4;

    cout << "The peak Element is at index " << peak(arr1, size, 0, size - 1);
    return 0;
}