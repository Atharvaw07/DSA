#include<iostream>
using namespace std;

bool isPrime(int num){

    for (int i = 2 ; i <num; i++)
    {
        if(num%i==0){
            return 0;

        }
        
    }
    return 1;
}
int main(){

int num;
cin>>num;

if (isPrime(num))
{
    cout<<"Prime";
}
else{
    cout<<"Not Prime";
}



return 0;

}