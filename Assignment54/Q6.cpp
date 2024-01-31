//6. Create a Dynamic array without using STL.
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
                delete[] a;
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
            void insert(int index, int value)
            {
                if(capacity==size)
                {
                    resize();
                }
                if(size>capacity || size<0)
                {
                    cout<<"memory does not exist"<<endl;
                }
                 a[index]=value;
                 size++;
            }
            void resize()
            {
                if(size>capacity || size<0)
                {
                    cout<<"memory does not exist"<<endl;
                }
                else
                {
                    int *temp=new int[2*capacity];
                    for(int i=0;i<size;i++)
                    {
                        temp[i]=a[i];
                    }
                    delete[]a;
                    a=temp;
                    capacity=2*capacity;
                }
            }
            void display()
            {
                for(int i=0; i<size; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                cout<<"size="<<size<<" capacity "<<capacity<<endl;
            }
};
int main()
{
     dynamicarray a1;
     a1.insert(0,23);
     a1.insert(1,54);
     a1.insert(2,67);
     a1.insert(3,99);
     a1.insert(4,11);
     a1.display();
     return 0;


}
