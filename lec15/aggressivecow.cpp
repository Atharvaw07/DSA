#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int size,int k,int mid){
    int cowCount=1;
    int lastPos=arr[0];

    for (int i = 0; i < size; i++)
    {
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;

}

int aggressiveCow(int arr[], int size, int k)
{
    sort(arr,arr+size);
    int s = 0;

    int maxi = -1;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, size, k, mid))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main()
{
    int stall[5] = {4, 1, 2, 3, 6};
    cout<<"Ans:"<<aggressiveCow(stall,5,2);
    return 0;
}