#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }

    Complex operator +(Complex b){
        Complex c;
        c.real=real+b.real;
        c.imag=imag+b.imag;
        cout<<c.real<<"+"<<c.imag<<"i"<<endl;
        return c;
    }

};
int main(int argc, char const *argv[])
{
    Complex a(10,5);
    Complex b(2,4);
    Complex c;
    c=a+b;
    
    return 0;
}
