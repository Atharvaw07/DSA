#include<iostream>
#include<vector>
using namespace std;

void checkSortRotated(vector<int>&num){
    int count=0;
    int n=num.size();
    for (int i = 1; i < n; i++)
    {
       if (num[i-1]>num[i])
       {
        count++;
       }
    }
     if (num[n-1]>num[0])
       {
        count++;
       }

       if (count<=1)
       {
        cout<<"Sorted and Rotated ";
       }
       else{
        cout<<"Nor Sorted or Rotated";
       }
       

    
}


int main(){
    vector<int>num={1,1,1,1};

    checkSortRotated(num);

   




return 0;

}