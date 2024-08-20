#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[9] = {0, 1, 2, 1, 2, 1, 0, 2, 0};

    sort012(arr, 9);
    printArr(arr, 9);
    return 0;
}