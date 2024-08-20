#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    int arr1[6]={1,2,3,4,5,6};
    int arr2[4]={3,4,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int length=0;
    int intersect[]={};
    

    int i=0;
    int j=0;
    while (i<n1 && j<n2)
    {
        if (arr1[i]==arr2[j])
        {
            intersect[length]=arr1[i];
            length++;
            i++;
            j++;
        }
        
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
        
        
    }

    cout<<"Intersected elements are:";
    for (int m = 0; m <length ; m++)
    {
       cout<<intersect[m]<<" ";
    }
    
    

    
    
    

return 0;

}