
// Overloading << and >> Operator
#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }

    friend ostream &operator << (ostream &out,Complex &c);
    friend istream &operator >> (istream &in,Complex &c);
};

    ostream &operator << (ostream &out,Complex &c){
        out<<c.real<<"+i"<<c.imag<<endl;
        return out;
    }  
    istream &operator >> (istream &in,Complex &c){
        cout<<"Enter real No. :";
        in>>c.real;
        cout<<"Enter imag No. :";
        in>>c.imag;
        return in;
    }  
int main(int argc, char const *argv[])
{   
    Complex c;
    cin>>c;
    cout<<c;   
    return 0;
}
