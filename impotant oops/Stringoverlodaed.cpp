#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    private:
            char *a;
            int size;
    public:
          mystring()
          {
              cout<<"Default constructer called"<<endl;
              a=(char*)malloc(1);
              size=1;
          }
          mystring (char *str)
          {
              cout<<"Parameter constructor called "<<endl;
              size=strlen(str);
              a=(char*)malloc(size+1);
              strcpy(a,str);
          }
          void change(char *str)
          {
              free(a);
              size=strlen(str);
              a=(char *)malloc(size);
              strcpy(a,str);
          }
          mystring(const mystring &s)
          {
               cout<<"Copy constructor called"<<endl;
               size=strlen(s.a);
               a=(char*)malloc(size+1);
               strcpy(a,s.a);
          }
          mystring& operator=(mystring &s)
            {
                cout<<"Assigment operator overlodad"<<endl;
                if(a==s.a)
                {
                    return *this;
                }
                free(a);
                size=strlen(s.a);
                a=(char*)malloc(size+1);
                strcpy(a,s.a);
                return *this;
            }
          void display()
          {
              cout<<"name="<<a<<"  size="<<size<<endl;
          }
          
          
};
int main()
{
    char p[]="Prashant";
    mystring P1(p);
    mystring P2=P1;
    mystring P3;
    P3=P1;
    mystring P4("MYsirG");
    P4=P1;
    mystring P5;
    P5=P4=P1;
    P1.change("Yadav");
    P1.display();
    P2.display();
    P3.display();
    P4.display();
    P1.display();
    P5.display();
    return 0;
}