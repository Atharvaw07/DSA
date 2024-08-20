#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>>&matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();

    int start=0;
    int end=(row*col)-1;

    int mid=start+(end-start)/2;

    while (start<=end)
    {
        int element=matrix[mid/col][mid%col];

        if (element==target)
        {
            return 1;
        }

        if (element<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
        
    }
    return 0;
}

int main(){
    vector<vector<int>>arr{{1,3,5,7},{10,11,16,20},{22,30,34,60}};

    if (search(arr, 3)) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    
return 0;

}