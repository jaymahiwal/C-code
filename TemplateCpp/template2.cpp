#include<iostream>
using namespace std;

//Inheritance Using Template
template<class T>
class Base{
    public:
    Base(){
        cout<<"I am Base"<<endl;
    }
};

template<class T>
class Derived:public Base<T>{
    public:
    Derived(){
        cout<<"I am Derived"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    // Base<int> b;
    Derived<int> d;
    return 0;
}
