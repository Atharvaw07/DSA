#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;

    
}

int main(){
    int arr[7]={8,7,6,9,85,3,74};
    cout<<"Enter the element to search:";
    int key;
    cin>>key;

    bool found=search(arr,7,key);

    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
return 0;

}