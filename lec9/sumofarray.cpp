#include<iostream>
using namespace std;

int sumArr(int arr[],int size){
int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
     int arr[5]={10,20,30,40,50};
    cout<<"Sum of Array:"<< sumArr(arr,5);
return 0;

}