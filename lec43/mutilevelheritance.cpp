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

class germanShepard:public Dog{

};
main()
{
    Dog d ;
    d.speak() ;
    cout<<endl;;

    cout<<d.age;
    cout<<endl;


    germanShepard g;
    g.speak();

    return 0;
}