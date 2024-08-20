#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int i=2;
    while (i<n)
    {
        if(n%i!=0){
            cout<<" prime";
            break;
        }
        else{
            cout<<" not a Prime";
            break;
        }
        i=i+1;
    }
    
return 0;

}