//5. Create a function in Array to check the size of an array.
#include<iostream>
using namespace std;
class array
{
    private:
           int a[20];
           int size;
    public:
              array()
              {
                 size=0;
              }
              void   getsize()
              {
                     cout<<"array size="<<size;
              }
              void insert(int index, int value)
              {
                  if(index>20 || index<0)
                  {
                        cout<<"Overflow"<<endl;
                  }
                  else
                  {
                      a[index]=value;
                      size++;
                  }
              }
              void deleted(int n)
              {
                  for(int i=n;i<size-1;i++)
                  {
                      a[i]=a[i+1];
                  }
                  size--;
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
    array a1;
    a1.insert(0,11);
    a1.insert(1,12);
    a1.insert(2,23);
    a1.display();
    a1.getsize();
    return 0;
}
