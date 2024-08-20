#include<iostream>
using namespace std;

int fib(int n){
    int a=0;
    int b=1;
    int nextNum;
    
    for (int i = 3; i <=n; i++)
    {
         nextNum=a+b;
         
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }

    return nextNum;

    
}
int main(){
int num;
cin>>num;

cout<<"The "<<num<<"th fib no is "<<fib(num);
return 0;

}