#include<iostream>
using namespace std;

class Student{
    public:
        char name[10];
        int roll;
        int m1,m2,m3;
        float avg;
        void input();
        void compute();
        void display();
};

void Student::input(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"enter roll";
    cin>>roll;
    cout<<"enter marks of 3 subject";
    cin>>m1>>m2>>m3;
}
void Student::compute(){
    avg=(m1+m2+m3)/3;
    cout<<"Average of Marks:"<<avg;
}
void Student::display(){
    cout<<"Entered name: "<<name<<"\n";
    cout<<"entered roll"<<roll<<"\n";
    cout<<"marks of 3 subject:";
    cout<<m1<<" "<<m2<<" "<<m3<<"\n";
}
int main(){
    Student s[10];
    s[1].input();
    s[1].display();
    s[1].compute();
    return 0;
}