//8. Create a function in a dynamic array to return the capacity of the array.
#include<iostream>
using namespace std;
class dynamicarray
{
    private:
            int *a;
            int size;
            int capacity;
    public:
           dynamicarray()
           {
               a=new int[1];
               size=0;
               capacity=1;
           }
           ~dynamicarray()
           {
               delete[]a;
               size=0;
               capacity=0;
           }
           int getsize()
           {
             return size;
           }
           int getcapacity()
           {
             return capacity;
           }
           void resize()
           {
                 int *temp=new int[2*capacity];
                    for(int i=0; i<size;i++)
                      {
                          temp[i]=a[i];
                      }
                      delete []a;
                      a=temp;
                      capacity=2*capacity;   
           }
           void insert(int value, int index)
           {
                 if(size==capacity)
                 {
                     resize();
                 }
                 else if(index>capacity || index<0)
                 {
                    cout<<"Memory does not exist"<<endl;
                 }
                      a[index]=value;
                      size++;
           }
           void display()
           {
               for(int i=0;i<size;i++)
               {
                  cout<<a[i]<<" ";
               }
               cout<<endl;
           }
};
int main()
{
    dynamicarray obj;
    while(1)
    {
          cout<<"================================================="<<endl;
          cout<<"1.insert number"<<endl;
          cout<<"2.display element"<<endl;
          cout<<"3.size of capacity"<<endl;
          cout<<"4.exit"<<endl;
          int num;
          cin>>num;
          switch(num)
          {
               case 1:
                       {
                           int num1,num2;
                           cout<<"Enter value, index"<<endl;
                           cin>>num1>>num2;
                           obj.insert(num1,num2);
                           break;
                       }
                case 2:
                        {
                            obj.display();
                            break;
                        }
                case 3:
                        {
                            cout<<"Capacity of array "<<obj.getcapacity()<<endl;
                            break;
                        }
                case 4:
                        {
                            exit(0);
                        }
               default :
                          {
                            cout<<"Envalid choice"<<endl;
                            break;
                          }
          }
    }
}
