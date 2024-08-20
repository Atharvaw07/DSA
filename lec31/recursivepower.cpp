#include<iostream>
using namespace std;

int power(int n){

    if (n==0)
    {
        return 1;

    }

    int smallProb=power(n-1);
    int biggerProb=2*smallProb;

    return biggerProb; 

    // return 2*power(n-1);
    
}

int main(){
int n;
cin>>n;

int ans=power(n);
cout<<ans;
return 0;

}