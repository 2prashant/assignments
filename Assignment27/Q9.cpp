/*
9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    private:
           char str[100];
    public:
         mystring(const char a[])
         {
             strcpy(str,a);
         }
         mystring()
         {

         }
         void setstring()
         {
           cin.getline(str,100);
        }
         void display()
         {
            cout<<str;
            cout<<endl;
         }
         void operator!()
         {
            for(int i=0;str[i];i++)
            {
                if(str[i]>64 && str[i]<91)
                {
                    str[i]=str[i]+32;
                }
                else if(str[i]>96  && str[i]<123)
                {
                    str[i]=str[i]-32;
                }

            }
         }
          

};
int main()
{
    mystring a1("prasHANT"),a2;
     a1.display();
     a2.setstring();
     a2.display();
    cout<<endl;
    !a1;
    !a2;
    a1.display();
    a2.display();
    return 0;
}
