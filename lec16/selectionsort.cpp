#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){

        for (int  i = 0; i < size-1; i++)
        {
            int minIndex=i;
            for (int j = i+1; j < size; j++)
            {
                if (arr[j]<arr[minIndex])
                {
                    minIndex=j;
                }
                
            }

            swap(arr[minIndex],arr[i]);
            
            for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        }
        
 
}


void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={64,29,11,12,34};

    selectionSort(arr,5);
    printArr(arr,5);
    
return 0;

}                           