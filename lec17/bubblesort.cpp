#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        bool swapped=false;
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
               swapped=true;
            }

            
        }
        if (swapped==false)
        {
            break;
        }
        
        
    }
    
}

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int arr[6]={1,7,6,10,9,14};
    bubbleSort(arr,6);
    printArr(arr,6);
return 0;

}