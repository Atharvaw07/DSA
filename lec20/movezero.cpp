#include <iostream>
using namespace std;

void moveZeros(int arr[], int size)
{
    int end = size - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == 0)
            {
                swap(arr[i], arr[j]);

            }
        }
    }

}

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

    int main()
    {
        int arr[5] = {0, 3, 2, 0, 5};
        moveZeros(arr,5);
        printArr(arr,5);

        return 0;
    }