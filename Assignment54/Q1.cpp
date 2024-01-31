//                 DSA: Array and Dynamic Array // Completed

//1. Create an ADT array without using STL.
#include<iostream>
using namespace  std;
class array
{
    private:
          int a[10];
          int size;
    public:
           array()
           {
               size=0;
           }
          int getsize()
          {
             return size;
          }
          void insert(int index,int value)
          {
              if(index>=9||index<0)
              {
                 cout<<"overflow"<<endl;
              }
              else
              {
                  a[index]=value;
                  size++;
              }
          }
          void deleteA(int index)
          {
               if(index<0)
               {
                 cout<<"Underflow"<<endl;
                  
               }
               else
               {
                 for(int i=index; i<size-1;i++)
                {
                  a[i]=a[i+1];
                  
                }
                a[size]=0;
                size--;
               }

          }
          void display()
          {
              for(int i=0; i<size; i++)
              {
                 cout<<a[i]<<" ";
              }
              cout<<endl;
          }
          int  search(int value)
          {
             int flag=0;
              for(int i=0;i<size;i++)
              {
                if(value==a[i])
                {
                    flag++;
                    cout<<"value is found at index "<<i<<endl;
                    return 0;
                }
              }
              if(flag==0)
              {
                 cout<<"Value is not found"<<endl;
              }
          }
          void insertion(int index, int value)
          {
              for(int i=size;i>index-1;i--)
              {
                  a[i+1]=a[i];
              }
              a[index]=value;
              size++;
          }
          
};
int main()
{
      array a1;
     // int x;
     // cout<<"Enter number=";
      /*for(int i=0;i<a1.getsize();i++)
      {
         cin>>x;
         a1.insert(i,x);
      }*/
      a1.insert(0,10);
      a1.insert(1,23);
      a1.insert(2,56);
      a1.insert(3,78);
      a1.insert(4,98);
      a1.insert(5,65);
      a1.display();
      a1.deleteA(3);
      a1.display();
      a1.deleteA(1);
      a1.display();
      a1.deleteA(3);
      a1.display();
       a1.deleteA(3);
      a1.display();
       a1.deleteA(-4);
      a1.display();
      a1.insert(88,65);
      a1.display();
      a1.search(10);
      a1.display();
      a1.search(56);
      a1.search(99);
      a1.display();
      a1.insert(2,90);
      a1.insert(3,23);
      a1.insert(4,56);
      a1.insert(5,87);
      a1.insert(6,33);
      a1.display();
      a1.insertion(2,876);
      a1.display();
      return 0;
}
