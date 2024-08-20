#include<iostream>
using namespace std;

void duplicateElements(int arr[],int n){
    // int n=sizeof(arr)/sizeof(arr[0]);
    int freq[n];
    int twice[n];
    int count=0;
    
    for(int i=0;i<n;i++){
        freq[i]=0;
    }
    
    for(int i=0;i<n;i++){
        if(freq[i]==0){
            int f=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    f++;
                    freq[j]=1;
                    twice[count]=arr[i];
                    count++;
                    
                }
            }
        }
    }
    if(count==2){
        for(int i=0;i<count;i++){
            cout<<twice[i]<<" ";
        }
    }

}
int main(){
     int arr[8]={4,3,4,7,8,2,3,1};
   
   duplicateElements(arr,8);
    

return 0;

}