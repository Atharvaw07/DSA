#include<iostream>
using namespace std;


void sortArray(int *arr,int n){
    if (n==0 || n==1)
    {
        return;
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }

        
    }

    // recusive call
    sortArray(arr,n-1);
    
    
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[6]={10,1,7,8,14,9};
    sortArray(arr,6);
    printArray(arr,6);

return 0;

}