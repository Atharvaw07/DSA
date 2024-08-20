#include<iostream>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];

    }
    return ans;
}

int main(){
    int arr[5]={1,3,5,1,3};

    cout<<"Unique Element is "<<unique(arr,5);

return 0;

}