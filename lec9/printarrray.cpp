#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    cout<<"Printing array!!!"<<endl;;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing DONE!!!"<<endl;;
    
}
int main(){
    int firstArray[5]={8,7,6,9,3};

    printArray(firstArray,5);

    int size=sizeof(firstArray)/sizeof(int);
    cout<<"Size:"<<size;
return 0;

}