

#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // ofstream -> it will create file and we can write also

    ofstream write;
    write.open("ajay.txt");

    if(write.is_open()){
        write<<"LINE 1 HEllO WORLD !";
        write<<"\n";
        write<<"LINE 2 this is file which is created using ofstrem\n";
        write<<"LINE 3 HEllO WORLD !";
        write<<"\n";
        write<<"LINE 4 this is file which is created using ofstrem";
    }
    else{
        cout<<"FAILED TO OPEN.......\n";
    }

    write.close();

    //ifstream -> it will read the file.

    ifstream read;
    read.open("ajay.txt");

    string str;
    string printL;
    char ch;
    // getline(read,printL);
    // cout<<printL;
    while(read.eof()==0){
        getline(read,printL);
        // read>>ch;
        cout<<printL<<endl;
    }
    if(read.is_open()){
    while(getline(read,str)){
        cout<<str<<endl;
    }
    }
    else{
        cout<<"Failed to Open.....\n";
    }


    /*
    fstream aj;
    aj.open("writeay1.txt");  //it will not create file
    aj.open("writeay1.txt",fstream::out);  //now it will create the file
    */
    return 0;
}