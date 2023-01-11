

//static variable 
#include<iostream>
using namespace std;
/*
Static variables in a Function:
 When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call. 
*/
void number(){
    static int count=0;
    cout<<"Value of Count:"<<count<<endl;
    count++;
}

void num(){
    int num=0;
    cout<<"Value of num:"<<num<<endl;
    num++;
}

int main(int argc, char const *argv[])
{
    
    for(int i=0;i<4;i++){
        number();
    }
    for(int i=0;i<4;i++){
        num();
    }
    return 0;
}

/*
Value of Count:0
Value of Count:1
Value of Count:2
Value of Count:3
Value of num:0
Value of num:0
Value of num:0
Value of num:0
*/
