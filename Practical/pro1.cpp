
//Scope Resoultion Opertor Use

#include<iostream>
using namespace std;
int a = 100;
int main()
{
    int a = 10;
    cout<<"value of a:"<<::a;
    return 0;
}
