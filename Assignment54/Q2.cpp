//2. Create an dynamic array and implement a search function in the array.
#include<iostream>
using namespace std;
class searching
{
      private:
               int *arr;
               int size;
               int capacity;
      public:
             searching()
             {
                  arr=new int[1];
                  size=0;
                  capacity=1;
             }
             ~searching()
             {
                 delete []arr;
                 int size=0;
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
            void insert(int index, int value)
            {
                  if(size==capacity)
                  {
                      resize();
                  }
                  if(index>=capacity || index<0)
                  {
                       cout<<"Memory does not exist"<<endl;
                  }
                  arr[index]=value;
                  size++;
            }
            void search(int v)
            {
                int flag=0;
                int start=0;
                int end=size;
                int mid=start+(end-start)/2;
                while(start<end)
                {
                    if(arr[mid]==v)
                    {
                        flag++;
                        cout<<"\nValue is exist at index="<<mid<<endl;
                        break;
                    }
                    else if(arr[mid]<v)
                    {
                         start=mid+1;
                    }
                    else if(arr[mid]>v)
                    {
                        end=mid-1;
                    }
                    mid=start+(end-start)/2;
                }
               if(flag==0)
               {
                   cout<<"Value is not found"<<endl;
               }
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
     
     searching obj;
     int num;
     while(1)
     {
        cout<<"==========================================================="<<endl;
        cout<<"\n1.Insert Number"<<endl;
        cout<<"2.search Number"<<endl;
        cout<<"3.display Number"<<endl;
        cout<<"4.exist"<<endl;
        cout<<"5.Your choice"<<endl;
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
                          int num;
                          cout<<"Enter number=";
                          cin>>num;
                          obj.search(num);
                          break;
                      }
             case 3:
                       {
                          obj.display();
                          break;
                       }
             case 4:
                      {
                          
                          exit(0);
                      }
            
        }
     }     
}