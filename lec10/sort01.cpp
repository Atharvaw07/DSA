#include <iostream>
using namespace std;

void sortOne(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        while (arr[i] == 0)
        {
            i++;
        }

        while (arr[j] == 1)
        {
            j--;
        }
        if (arr[i]==1 && arr[j]==0 && i<j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
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
    int arr[6] = {0, 1, 0, 1, 1, 0};

    sortOne(arr, 6);
    printArr(arr, 6);

    return 0;
}