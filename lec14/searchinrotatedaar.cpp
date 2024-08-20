#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[],int s,int e,int key,int size){
    int start=s;
    int end=e;

    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }

        if (arr[mid]<key)
        {
            start= mid +1;
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
        
        
    }
    return -1;
    
}
int searchRotated(int arr[],int size,int key){

        int pivot=getPivot(arr,size);
        if (key <= arr[pivot] && key <= arr[size-1])
        {
            return binarySearch(arr,pivot,size-1,key,size);
        }
        else{
            return binarySearch(arr,0,pivot-1,key,size);
        }
        
        
}
int main()
{
    int arr[5] = {3, 7, 9, 1, 2};

    cout << "The index is " << searchRotated(arr,5,1);
    return 0;
}