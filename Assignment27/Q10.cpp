/*
10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Output 
*/
#include<iostream>
using namespace std;
class matrix
{
    private:
           int a[3][3];
    public:
           void setarray()
           {
               for(int i=0; i<3; i++)
               {
                 for(int j=0; j<3; j++)
                 {
                    cin>>a[i][j];
                 }
               }
           }
           void display()
           {
              for(int i=0; i<3; i++)
              {
                for(int j=0; j<3; j++)
                {
                    cout<<a[i][j];
                }
              }
           }
           void operator+(matrix t)
           { 
              int x[3][3];
               for(int i=0; i<3;i++)
               {
                  for(int j=0;j<3;j++)
                  {
                       x[i][j]=a[i][j]+t.a[i][j];
                  }
               }
           
           //  cout<<"After addition" <<endl;
             for(int i=0; i<3; i++)
             {
                for(int j=0; j<3; j++)
                {
                  cout<<x[i][j]<<" ";
                }
                  cout<<endl;
             }
            }
   
};
int main()
{
    matrix m1,m2,m3;
    cout<<" Enter first matrix:"<<endl;
    m1.setarray();
    cout<<"  Enter Second matrix element:"<<endl;
    m2.setarray();
    cout<<endl;
    m1+m2;
    return 0;

}
