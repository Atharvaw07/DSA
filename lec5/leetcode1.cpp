#include<iostream>
using namespace std;


int main(){
    int n=234;
    int prod=1;
    int sum=0;

    while (n!=0)
    {
        int rem=n%10;
        prod=prod*rem;
        sum=sum+rem;

        n=n/10;

    }
    int ans=prod-sum;
    cout<<ans;
    

return 0;

}