#include <iostream>
using namespace std;

int searchRotated(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= key && key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {

            if (arr[mid] < key && key <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[5] = {3, 7, 9, 2, 1};
    cout << "The key is at index:" << searchRotated(arr, 5, 1);
    return 0;
}