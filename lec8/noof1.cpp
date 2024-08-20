#include<iostream>
using namespace std;

int setBitA(int a){
    int count=0;
    while (a!=0)
    {
        if(a&1==1){
            count++;
        }
        a=a>>1;
    }

    return count;
    
}
int setBitB(int b){
    int count=0;
    while (b!=0)
    {
        if(b&1==1){
            count++;
        }
        b=b>>1;
    }

    return count;
    
}
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;

    int b;
    cout<<"Enter b:";
    cin>>b;

    int ans1=setBitA(a);
    int ans2=setBitB(b);
    
    int total=ans1+ans2;

    cout<<"Total no of setbits:"<<total;

return 0;

}       