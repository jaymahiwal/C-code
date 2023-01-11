#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream out;
    out.open("random.txt");
    // out<<" Line 1 Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo \n Line 2 Aspernatur eveniet reiciendis aliquid eligendi distinctio! vitae sim \n Line 3 iliquen alias cumque dolore non tenetur adipisci qui perspiciatis qui \n Line 4 dem. Nostrum ipsaNostrum ipsaNostrum ipsaNostrum ipsaNostrah eum qui \n";

    out<<"12345678901234567890123456789012345678901234567890"; // 50 Tak
    // cout<<out.tellp();
    string aj="nick name is";
    
    out.seekp(5,ios::beg);
    out<<aj;
    out.seekp(5,ios::cur);
    out<<aj;
    out.seekp(-5,ios::end);
    out<<aj;

    out.close();

    ifstream read;
    read.open("random.txt");
    string p ;
    read.seekg(5,ios::beg);
    getline(read,p);
    cout<<p;

    return 0;
}
