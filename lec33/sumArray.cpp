#include<iostream>
using namespace std;

int sumArray(int arr[],int start,int end){
    //base case
    if (start>end) //size==0
    {
        return 0;
    }

    return arr[start]+sumArray(arr,start+1,end);


    
}

int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);

    int sum=sumArray(arr,0,length-1);
    cout<<"Sum is "<<sum;
return 0;

}