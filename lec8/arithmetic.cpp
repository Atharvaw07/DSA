#include<iostream>
using namespace std;

int arithmetic(int n){
    int ans=3*n+7;
    
    return ans;
}
int main(){

    int num;
    cin>>num;

    int ap=arithmetic(num);
    cout<<"Ans:"<<ap;
return 0;

}