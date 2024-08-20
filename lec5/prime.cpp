#include<iostream>
using namespace std;


int main(){
    int n=10;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"Not a prime";
            break;
        }
        else{
            cout<<"prime";
            break;
        }
        
    }
    
return 0;

}