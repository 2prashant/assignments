#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("c:/fileh/abc.text");
    if(!fout)
    {
        cout<<"file is not created"<<endl;
    }
    else
    {
        while(fout)
        {
            getline(cin,line);
                if(line=="-1")
                {
                    break;
                }
                fout<<line;
        }
        fout<<"hello how are you";
        cout<<"file is created"<<endl;
    }
    fout.close();
    return 0;
}