#include<iostream>
using namespace std;
class DynamicArray
{
    int *array;
    int size;  
    int capacity;
      
       public:
              int getsize()
              {
                  return size;
              }
              int getcapacity()
              {
                  return capacity;
              }
           DynamicArray()
           {
               array=new int[1];
               size=0;
               capacity=1;
           }

        ~DynamicArray()
        {
            delete []array;
            size=0;
            capacity=0;
        }
        void insertByshifit(int index, int value)
        {
             if(size==capacity)
          {
              resize();
          }
          if(index>=capacity  || index<0)
          {
             cout<<"Memory Not exist"<<endl;
          }
          for(int i=size; i>=index; i--)
            {
                array[i]=array[i-1];
            }
            array[index]=value;
            size++;

        }

      void insert(int index, int value)
      {
          if(size==capacity)
          {
              resize();
          }
          if(index>=capacity  || index<0)
          {
            cout<<"Memory Not exist"<<endl;
          }
          array[index]=value;
          size++;
       }
       void resize()
       {
           int *temp=new int[2*capacity];
           for(int i=0;i<size;i++)
           {
                temp[i]=array[i];
           }
           delete[]array;
           array=temp;
           capacity=2*capacity;

       }
       void PrintArray()
       {
          for(int i=0; i<size; i++)
          {
              cout<<array[i]<<" ";
          }
          cout<<endl;
          cout<<"Size="<<getsize()<<" "<<"Capacity="<<getcapacity()<<endl;
       }
       void deleteA(int index)
       {
            if(index>=size)
            {
                cout<<"Index does not index";
                return ;
            }
            for(int i=index;i<size-1;i++)
            {
                array[i]=array[i+1];
            }
            size--;
        }
       void shrinkToFit()
       {
           int *temp=new int[size];
           for(int i=0;i<size;i++)
           {
              temp[i]=array[i];
           }
           delete []array;
           array=temp;
           capacity=size;
       }
       void reverse()
       {
              for(int i=0;i<size;i++)
              {
                
              }
       }

      int search(int value)
      {
         for(int i=0;i<size; i++)
         {
            if(array[i]=value)
            {
                return i;
            }
            return 1;//value does not exist.
         }
      }

};
int main()
{
    DynamicArray a;

    int *b{new int[5] {1,2,3,4,5}};
    for(int i=0; i<5; i++)
    {
         cout<<b[i]<<" ";
    }
    cout<<endl;
    
    a.PrintArray();

    a.insert(0,10);
    a.PrintArray();

    a.insert(1,20);
    a.PrintArray();

    a.insert(3,30);
    a.PrintArray();

    a.insert(8,80);
    a.PrintArray();

    a.insert(4,40);
    a.PrintArray();
   
    // a.insertByshifit(2,200);
    // a.PrintArray();
    
    // a.deleteA(1);
    // a.shrinkToFit();
    // a.PrintArray();

    // int i=a.search(200);
    // if(i!=-1)
    // {
    //     cout<<"Value Found"<<endl;
    // }
    // else
    // {
    //     cout<<"value NOT found"<<endl;
    // }

    return 0;
}