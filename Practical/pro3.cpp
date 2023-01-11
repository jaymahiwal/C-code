#include<iostream>
using namespace std;
class base{
    public:
    int a,b;
    base(int x,int y){
        a=x;
        b=y;
        cout<<"I am base and Sum is:"<<a+b<<"\n";
    }
    ~base(){
        cout<<"i am base"<<"\n";
    }
};
class derived{
    public:
    int j,k;
    derived(int x,int y){
        j=x;
        k=y;
        cout<<"I am derived and Sum is:"<<j+k<<"\n";
    }
    ~derived(){
        cout<<"i am derived"<<"\n";
    }
};
class derived1:public base,public derived{
    public:
    int m,n;
    derived1(int s,int t,int u,int v,int x,int y):base(s,t),derived(u,v){
        m=x;
        n=y;
        cout<<"I am derived1 And sum is:"<<m+n<<"\n";
    }
    ~derived1(){
        cout<<"i am derived1"<<"\n";
    }
};
int main(){
    derived1 obj(5,5,10,10,20,20);
    return 0;
}