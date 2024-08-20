#include<iostream>
using namespace std;


int main(){
    int arr[100];

    fill_n(arr,100,9);

    for (int i = 1; i <=100; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;

}