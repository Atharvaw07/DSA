#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void speak(){
        cout<<"Speaking";
    }
};

class Dog:public Animal{

};
main()
{
    Dog d ;
    d.speak();
    cout<<d.age;

    return 0;
}