#include<iostream>
using namespace std;

//friend function Using Template
template<class T>
class Base{
    int a=100;
    public:
    Base(){
        cout<<"I am Base"<<endl;
    }
    template<class U>
    friend void number(Base<U> obj);
};
template<class U>
 void number(Base<U> obj){
    cout<<"Value Of a Base variable:"<<obj.a;
}

int main(int argc, char const *argv[])
{
    Base<int> b;
    number(b);
    return 0;
}
