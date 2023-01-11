#include<iostream>
using namespace std;

//class ki jaghe per typename bhi likh skte hai
//template<tyepname T>

template<class T>
//sum function using template
T sum(T a,T b){
    return a+b;
}

template<class T>
T subtract(T a,T b){
    return a-b;
}

// class using template
template<class T>
class Number{
    public:
        // T num1;
        // T num2;
        Number(){
            cout<<"I am Constructor Of Number"<<endl;
        }
        T sum(T n1,T n2){
            return n1+n2;
        }
        ~Number(){
            cout<<"I am Destructor Of Number"<<endl;
        }
};

int main(int argc, char const *argv[])
{
    cout<< sum<int>(10,20)<<endl;
    cout<< subtract<int>(20,10)<<endl;

    Number<int> n;
    cout<< n.sum(10,100) <<endl;
    return 0;
}
