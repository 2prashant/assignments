#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int a[100];
    int top;

     public:
       
         stack()
         {
            top=-1;
         }
         ~stack()
         {
             top=-1;
         }
         void push(int value)
         {
            if(isStackFull())
            {
                cout<<"stack overfloaw"<<endl;
            }
            else
           {
              top++;
               a[top]=value;
               /*
                   OR
                   a[++top]=value;
               */
           }
         }
         int isStackEmpty()
         {
            if(top==-1)
            {
                return 1;
            }
            else
             return 0;
         }
        int isStackFull()
        {
            if(top==99)
            {
                return 1;
            }
            else
            {
                return 0; 
            }
        }
         int pop()
         {
            if(isStackEmpty())
            {
                 cout<<"Stack Underflow"<<endl;  
                    
            }
            else
            {
                top--;
                return a[top+1];
                /*
                   OR
                   return a[top--];
                */
            }
         }
         int topA()
         {
            if(isStackEmpty())
            {
                cout<<"Stack Underflow"<<endl;
            }
            return a[top];
         }
         int size()
         {
            return top+1;
         }


};
int main()
{
    int choice;
    stack s;
    
    while(choice!=5)
    {
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.Get pop"<<endl;
        cout<<"4.Get size"<<endl;
        cout<<"5.Exit"<<endl;
        
        cout<<"Enter your choice"<<endl;
        cin>>choice;
         
         switch(choice)
         {
              case 1:
              {
                        int value;
                        cout<<"Enter a number"<<endl;
                        cin>>value;
                        s.push(value);
                        break;
              }
              case 2:
              {
                   int value=s.pop();
                   cout<<"Deleted value is"<<value<<endl;
                   break;
              }
              case 3:
              {
                 cout<<"Top of stack is"<<s.topA()<<endl;
                 break;
              }
              case 4:
              {
                cout<<"Size of Stack is"<<s.size()<<endl;
                break;
              }
              case 5:
              {
                  exit(0);
              }
         }

    }
    return 0;
}