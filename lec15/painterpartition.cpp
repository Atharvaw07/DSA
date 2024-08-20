#include<iostream>
using namespace std;

bool isPossible(int arr[],int size,int k,int mid){
    int painterCount=1;
    int paintWall=0;

    for (int i = 0; i < size; i++)
    {
        if (paintWall+arr[i]<=mid)
        {
            paintWall=paintWall+arr[i];
        }
        else{
            painterCount++;
            if (painterCount>k || arr[i]>mid)
            {
                return false;
            }
            paintWall=arr[i];
        }
          if(painterCount > k) {
            return false;
        }
        
    }
    return true;
}
int partitionProb(int arr[],int size,int k){

    int start=0;
    int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }

    int end=sum;
    int ans=-1;

    int mid=start+(end-start)/2;

    while (start<=end)
    {
       if(isPossible(arr,size,k,mid)){
            ans=mid;
            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
    
    
}

int main(){
int arr[4]={5,5,5,5};
int ans1=partitionProb(arr,4,2);
cout<<"Answer is "<<ans1;
return 0;

}