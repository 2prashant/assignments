//insert, delete, searching, insertion. 

#include<iostream>
using namespace std;
class Array
{
     private:
          int a[15];
          int size=0;
     public:
         int getvalue(int index)
         {
              return a[index];
         }
         int getsize()
         {
            return size;
         }
         void insert(int value, int index)
            {
                if(15<index)
                {
                    cout<<"overflow\n";
                }
                else
                     a[index]=value;
                     size++;
            }

        int  search(int value)
        {
            for(int i=0; i<getsize(); i++)
            {
                if(getvalue(i)==value)
                {
                    return 1;
                }
            }
            return -1;
        }
        void deteteA(int index)
        {
            
            for(int i=index; i<getsize()-1; i++)
            {
                a[i]=a[i+1];
            }
            a[getsize()-1]=0;
            size--;
        }
          void display()
          {
              cout<<"elements=";
              for(int i=0; i<getsize(); i++)
              {
                 cout<<getvalue(i)<<" ";
              }
              cout<<"\nSize="<<getsize();
          }
          int  insertion(int index, int value)
          {
              if(15<index)
              {
                cout<<"size is not avelable";
                 return 0;
              }
               for(int i=getsize()-1; i>=index;i--)
               {
                     a[i+1]=a[i];
               }
               a[index]=value;
               size++;
          }

     
};
int main()
{
    Array array1;
    int size,num,serh,index,index1,value1;
    int value;
    
    cout<<"Enter array size=";
    cin>>size;
    for(int i=0;i<size; i++)
    {
        cin>>value;
        array1.insert(value,i);
    }
    array1.display();


    cout<<"\nEnter search Element=";
    cin>>num;
    serh=array1.search(num);
    if(serh==1)
    {
        cout<<"Element is found";
    }
    else
    {
        cout<<"Element is not found";
    }
      
     cout<<"\ninsertion--Enter index & value";
     cin>>index1>>value1; 
     array1.insertion(index1,value1);
     array1.display();


    cout<<"\nEnter Delete index=";
    cin>>index;
    array1.deteteA(index);
    array1.display();


    return 0;
}