#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>&num1,int n,vector<int>&num2,int m){
    for (int i = 0; i < num2.size(); i++)
    {
       num1.pop_back();
    }

    for (int i = 0; i < num2.size(); i++)
    {
        num1.push_back(num2[i]);
    }

    sort(num1.begin(),num1.end());
    
    
}

void printArr(vector<int>num){
    for (int i = 0; i < num.size(); i++)
    {
        cout<<num[i]<<" ";
    }
    
}
int main(){
   vector<int>num1;
   num1.push_back(1);
   num1.push_back(2);
   num1.push_back(3);
   num1.push_back(0);
   num1.push_back(0);
   num1.push_back(0);

   

   vector<int>num2;
   num2.push_back(2);
   num2.push_back(4);
   num2.push_back(5);


   merge(num1,3,num2,3);
   printArr(num1);



return 0;

}