#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi=max(maxi,arr[i]);
        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
    }

    return maxi;
}

int getMin(int arr[], int size)
{
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        mini=min(mini,arr[i]);
        // if (arr[i] < mini)
        // {
        //     mini = arr[i];
        // }
    }

    return mini;
}
int main()
{
    int size;
    cout << "Enter size:";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<"Maximum:"<<getMax(arr,size)<<endl;;
    cout<<"Minimum:"<<getMin(arr,size)<<endl;


    return 0;
}