#include<iostream>
using namespace std;

bool isSorted(int *arr,int size){
    if (size==0 || size==1)
    {
        return true;
    }

    if (arr[0]>arr[1])
    {
        return false;

    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
    
    
}

int main(){

    int arr[5]={1,2,3,4,5};

    int ans=isSorted(arr,5);
    if (ans)
    {
        cout<<"Sorted";
    }
    else{
        cout<<"not sorted";
    }
    
return 0;

}