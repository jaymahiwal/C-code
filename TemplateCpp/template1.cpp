#include<iostream>
using namespace std;

// More than one argument to templates
template<class T,class U>
class Name{
    public:
        void PrintNames(T n,U age){
            cout<<"My name is "<<n<<" and age is "<<age<<endl;
        }
};
int main(int argc, char const *argv[])
{
    Name<string,int> n;
    // char name[]={'A','j','a','y'};
    int num[]={1,2,3,4,5,5};
    n.PrintNames("Ajay",19);
    // cout<<name;
    return 0;
}
