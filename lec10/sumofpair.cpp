#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};
int s=5;

vector<vector<int>>ans;//<------declaration of vector

for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j < 5; j++)
    {
        if (arr[i]+arr[j]==s)
        {
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
        }
        
    }
    
}

sort(ans.begin(),ans.end());

cout<<"Pair of elements are: ";
for (int  m = 0; m < ans.size(); m++)   
{
    for (int n = 0; n < ans[m].size(); n++)
    {
        cout<<ans[m][n]<<" ";
    }
    cout<<endl;
    
}


return 0;

}