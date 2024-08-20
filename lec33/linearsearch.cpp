#include<iostream>
using namespace std;

bool linerSearch(int arr[],int size,int key){

    if (size==0)
    {
        return false;
    }

    if (arr[0]==key)
    {
        return true;
    }
    else{
        bool remainingPart=linerSearch(arr+1,size-1,key);
        return remainingPart;
    }
    
    
}

int main(){
    int arr[]={1,8,6,9,7};

    int ans= linerSearch(arr,5,3);

    if (ans)
    {
        cout<<"Element found";
    }
    else{
        cout<<"Not Found";
    }
    
return 0;

}