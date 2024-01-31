//9. Create an array and implement a search function in the array.
#include<iostream>
using namespace std;
class Array
{
       private:
              int *arr;
              int size;
              int capacity;
       public:
              Array()
              {
                  arr=new int[1];
                  size=0;
                  capacity=1;
              }
              ~Array()
              {
                 delete []arr;
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
                  for(int i=0;i<size;i++)
                  {
                       temp[i]=arr[i];
                  }
                  delete []arr;
                  arr=temp;
                  capacity=2*capacity;
              }
              void insert(int index,int value)
              {
                  if(size==capacity)
                  {
                      resize();
                  }
                  if(index>capacity || index<0)
                  {
                     cout<<"Memory does not exist"<<endl;
                  }
                  else
                  {
                        arr[index]=value;
                        size++;
                  }
              }
              void display()
              {
                  for(int i=0;i<size;i++)
                  {
                      cout<<arr[i]<<" ";
                  }
                  cout<<endl;
                  cout<<"Size : "<<getsize()<<"   Capacity : "<<getcapacity()<<endl;
              }
              void BinarySearch(int v,int size)// Only work on sorted Array
              {
                   int start=0;
                   int end=size;
                   int mid=start+(end-start)/2;
                   while(start<=end)
                   {
                      if(v==arr[mid])
                      {
                          cout<<"Value is found"<<endl;
                          return;
                      }
                      else if(v<arr[mid])
                      {
                           end=mid-1;
                      }
                      else if(v>arr[mid])
                      {
                          end=mid+1;
                      }
                      mid=start+(end-start)/2;
                   }  
                }
                void Linear_Search(int v)
                {

                    for(int i=0;i<size;i++)
                    {
                        if(arr[i]==v)
                        {
                            cout<<"Value is found "<<endl;
                            return;
                        }
                    }
                    cout<<"Value is not found"<<endl;
                }
               void shrinktofit()
               {
                   int *temp=new int[size];
                   for(int i=0;i<size;i++)
                   {
                       temp[i]=arr[i];
                   }
                   delete []arr;
                   arr=temp;
                   capacity=size;
               }
               void reverse()
               {
                   int i=0;
                   int j=size-1;
                   while(i<j)
                   {
                       int temp=arr[i];
                       arr[i]=arr[j];
                       arr[j]=temp;
                       i++;
                       j--;
                   }
               }
               void QuickSort()
               {
                
               }

};
int main()
{
     Array obj;
     obj.insert(0,11);
     obj.insert(1,12);
     obj.insert(2,13);
     obj.insert(3,14);
     obj.insert(4,16);
     obj.display();
     obj.Linear_Search(16);
     obj.shrinktofit();
     obj.display();
     obj.reverse();
     obj.display();

}
