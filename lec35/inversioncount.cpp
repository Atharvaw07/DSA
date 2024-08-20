#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int start, int mid, int end)
{
    int i = start;
    int j = mid;
    int k = start;

    int count = 0;

    while (i <= mid - 1 && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=mid-i;
        }
    }

    while (i<=mid-1)
    {
        temp[k++]=arr[i++];
    }

    while (j<=end)
    {
        temp[k++]=arr[j++];
    }

    for ( i = start; i <= end; i++)
    {
       arr[i]=temp[i];
    }
    
    return count;
}

int mergeSort(int arr[], int temp[], int start, int end) {
    int count = 0;
    if (start < end) {
        int mid = start + (end - start) / 2;
        count += mergeSort(arr, temp, start, mid);
        count += mergeSort(arr, temp, mid + 1, end);
        count += merge(arr, temp, start, mid + 1, end);
    }
    return count;
}

int inversionCount(int arr[], int size) {
    int* temp = new int[size];
    int count = mergeSort(arr, temp, 0, size - 1);
    delete[] temp;
    return count;
}

int main() {
    int arr[] = { 1, 20, 6, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = inversionCount(arr, size);
    cout << "Inversion count: " << count << endl;

    return 0;
}