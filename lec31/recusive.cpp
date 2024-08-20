#include<iostream>
using namespace std;

int fact(int n){
    if (n==0)
    {
        return 1;

    }

    // int smallProb=fact(n-1);
    // int biggerProb=n*smallProb;
    
    // return biggerProb;

    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans=fact(n);
    cout<<ans;
return 0;

}