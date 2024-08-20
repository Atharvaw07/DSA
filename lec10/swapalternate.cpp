#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    
    for (int i = 0; i < 6; i=i+2)
    {
        if (i+1<size)   
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
    
    

    
}
void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={7,8,9,10,11};

    swapAlternate(even,6);
    swapAlternate(odd,5);

    printArr(even,6);
    printArr(odd,5);


return 0;

}