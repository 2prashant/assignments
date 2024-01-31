#include<iostream>
using namespace std;
class tree
{
     private:
            int a[20]={0};
             int size=20;
     public:            
            void insertAtposition(int v, int p)
            {
                if(p==1)
                {
                    a[p]=v;
                }
                else if(a[p/2]!=0 && (size>p) )
                {
                        a[p]=v;
                }
                else
                {
                    cout<<"Parent does not exist"<<endl;
                }
            }

             void insertAtleftchild(int v ,int p)
             {
                if(a[p]!=0 && (2*p)<size)
                {
                     a[2*p]=v;
                }
                else
                {
                    cout<<"Parent does not exist"<<endl;
                }
             }
             void insertAtright(int v ,int p)
             {
                if(a[p]!=0 && (2*p+1)<size)
                {
                    a[2*p+1]=v;
                }
                else
                {
                    cout<<"Parent does not exist"<<endl;
                }
             }
             void print()
             {
                for(int i=1;i<size;i++)
                {
                    if(a[i]!=0)
                    {
                        cout<<a[i]<<" ";
                    }
                    else 
                    {
                        cout<<"_"<<" ";
                    }
                }
             }
};
int main()
{
     tree obj;
     obj.insertAtposition(5,1);
     obj.insertAtleftchild(2,1);
     obj.insertAtright(3,1);
     obj.insertAtleftchild(2,2);
     obj.insertAtleftchild(4,3);
     obj.print();

}