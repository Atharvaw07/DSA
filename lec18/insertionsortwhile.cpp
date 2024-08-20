#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int i = 1;
    while (i < size)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
        arr[j + 1] = temp;
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
    int arr[6] = {1, 7, 6, 10, 9, 14};
    insertionSort(arr, 6);
    printArr(arr, 6);
    return 0;
}