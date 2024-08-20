#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"Isnide Function A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Isnide Function B"<<endl;
    }
};

class C:public A,public B{
    public:
    void func1(){
        cout<<"Isnide Function C"<<endl;
    }
};

int main(){

    C obj;
    // obj.func()---->Error bcz of same function
    obj.A::func();

return 0;

}