#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside the function 1"<<endl;
    }
};

class D{
    public:
    void func4(){
        cout<<"Inside function 4 "<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

class C:public A,public D{
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

    cout<<endl;
    C obj2;
    obj2.func4();
    obj2.func1();
return 0;

}