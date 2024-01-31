//4. Create a function in Array to sort the given array.
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
          int getsize()
          {
              return size;
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
          void sort()
          {
              cout<<"sort elements"<<endl;
              for(int i=0;i<size;i++)
              {
                for(int j=i+1;j<size;j++)
                {
                    if(a[i]>a[j])
                    {
                      int temp;
                      temp=a[i];
                      a[i]=a[j];
                      a[j]=temp;
                    }
                }
              }
              for(int i=0;i<size;i++)
              {
                  cout<<a[i]<<" ";
              }
          }
          void display()
          {
            for(int i=0;i<size; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
          }


};
int main()
{
    array a1;
      a1.insert(0,98);
      a1.insert(1,78);
      a1.insert(2,16);
      a1.insert(3,25);
      a1.insert(4,27);
      a1.insert(5,24);
      a1.insert(6,21);
      a1.insert(7,12);
      a1.insert(8,23);
      a1.display();
      a1.sort();
    return 0;

}
