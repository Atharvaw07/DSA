#include<iostream>
#include<vector>
using namespace std;

void rotatedArray(vector<int>&num,int k){
    vector<int>temp(num.size());

    for (int i = 0; i < num.size(); i++)
    {
        temp[(i+k)%num.size()]=num[i];
    }

    num=temp;
    
}
void printArr(vector<int>&num){
    for (int i = 0; i < num.size(); i++)
    {
        cout<<num[i]<<" ";
    }
    
}
int main(){
    vector<int>num={1,3,9,11};
    rotatedArray(num,2);
    printArr(num);


return 0;

}