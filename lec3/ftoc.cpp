#include<iostream>
using namespace std;


int main(){
    int far;
    cout<<"Enter a value in fahrenheit:";
    cin>>far;

    
    int cel=(far-32)*5/9;
    cout<<far<<"F to celcius = "<<cel<<"C";
return 0;

}