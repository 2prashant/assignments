#include<iostream>
using namespace std;
int main()
{
      int a,b,c;
      cout<<"Enter two number=";
      cin>>a>>b;
      try
      {
          if(b==0)
           throw "Diveded by zero is error";
          if(b==1)
          {
              throw b;
          }
          if(b==5)
          {
               throw exception();
          }
          if(b==6)
          {
              throw exception();
          }
          c=a/b;
      }catch(const char *msg)
      {
          cout<<msg<<endl;
      }
      catch(int x)
      {
           cout<<"Mai hu saktiman"<<x<<endl;
      }
    //   catch(const std::exception& e)
    //   {
    //     std::cerr << e.what() << '\n';
    //   }
      catch(...)
      {
          cout<<"welcome"<<endl;
      }
      cout<<"Result="<<c<<endl;
      return 0;
      
}