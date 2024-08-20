#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside the function 1"<<endl;
    }
};

class B:public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

class C:public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }
};

int main(){
    A obj;
    obj.func1();

    B obj1;
    obj1.func1();
return 0;

}