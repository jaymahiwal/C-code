#include<iostream>
using namespace std;

class Animal{
    public:
    // virtual void speak(){
    //     cout<<"Animals Speak only their Local Language. \n";
    // }
    virtual void speak()=0; //pure virtual funx
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Dog Speaks bhau bhau Like this. \n";
    }
};
class Cat:public Animal{
    public:
    void speak(){
        cout<<"Cat Speaks Miyau Miyau Like this. \n";
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    // Dog d;
    // d.Animal::speak(); // Calling Base funx Using Derived class obj

    Animal* a=new Dog; // Calling Derived class funx Using Base class obj
    a->speak();
    // Animal a;
    return 0;
}
