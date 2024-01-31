//3. Create a function in dynamic Array to reverse an array.
#include<iostream>
using namespace std;
class Reverse
{
     private:
             int *arr;
             int size;
             int capacity;
     public:
              Reverse()
              {
                  arr=new int[1];
                  size=0;
                  capacity=1;
              }
              ~Reverse()
              {
                  delete []arr;
                  size=0;
                  capacity=0;
              }
              void resize()
              {
                  int *temp=new int[2*capacity];
                  for(int i=0;i<size;i++)
                  {
                       temp[i]=arr[i];
                  }
                  delete []arr;
                  arr=temp;
                  capacity=2*capacity;
              }
              void insert(int index, int v)
              {
                   if(size==capacity)
                   {
                         resize();
                   }
                   if(index>=capacity || index<0)
                   {
                       cout<<"Memory does not exist"<<endl;
                   }
                   arr[index]=v;
                   size++;
              }
              void insertAtmiddle(int index, int v)
               {
                    if(size==capacity)
                    {
                       resize();
                    }
                    if(index>=capacity || index<0)
                    {
                         cout<<"Memory does not exist"<<endl;
                    }
                    for(int i=size-1;i>=index;i--)
                    {
                         arr[i+1]=arr[i];
                    }
                    size++;
               }
               void reverse()
               {
                    for(int i=size-1;i>=0;i--)
                    {
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
               }
              void display()
              {
                  for(int i=0;i<size;i++)
                  {
                     cout<<arr[i]<<" ";
                  }
                  cout<<endl;
              }
              
};
int main()
{
        Reverse obj;
        int num;
        while(1)
        {
            cout<<"\n==================================================="<<endl;
            cout<<"1.insert number"<<endl;
            cout<<"2.insertAtMiddle"<<endl;
            cout<<"3.Reverse Array"<<endl;
            cout<<"4.Display Array"<<endl;
            cout<<"5.Exit"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>num;
            switch(num)
            {
                 case 1:
                           {
                              int num1,num2;
                              cout<<"Enter index and value"<<endl;
                              cin>>num1>>num2;
                              obj.insert(num1,num2);
                              break;
                           }
                  case 2:
                           {
                              int num1,num2;
                              cout<<"Enter index and value"<<endl;
                              cin>>num1>>num2;
                              obj.insertAtmiddle(num1,num2);
                              break;
                           }
                   case 3:
                           {
                               obj.reverse();
                               break;
                           }
                   case 4:
                           {
                                obj.display();
                                break;
                           }
                   case 5:
                           {
                               exit(0);
                           }
            }
        }

}