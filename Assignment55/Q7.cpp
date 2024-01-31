// 7.Design a data-structure SpecialStack that supports all the stack operations like
// push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should
// return minimum element from the SpecialStack. Your task is to complete all the
// functions, using stack data-Structure.
// Example 1:
// Input:
// Stack: 18 19 29 15 16
// Output: 15
// Explanation:
// The minimum element of the stack is 15.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class stack1
{
    private:
            int s[50];
            int top=-1;
            int size=50;
    public:
             
            void push(int v)
            {
                if(top>=size)
                {
                    cout<<" Stack is full"<<endl;
                }
                else
                {
                      s[++top]=v;
                }
            }
            int pop()
            {
               if(top==-1)
               {
                   cout<<"Stack underflow"<<endl;
               }
               else
               {
                   return s[top--];
               }
            }
            void isempty()
            {
                if(top==-1)
                {
                    cout<<"Stack is empty"<<endl;
                }
                else
                {
                    cout<<"Stack is not empty"<<endl;
                }
            }
            void isfull()
            {
                 if(top==size-1)
                 {
                    cout<<"Stack is full"<<endl;
                 }
                 else
                 {
                    cout<<" Stack is not full"<<endl;
                 }
            }
            int top_element()
            {
               return s[top];
            }
            int getmin()
            {
               // first method
                //  int arr[top+1];
                //  int i=0;
                // while(!s.isempty())
                // {
                //     arr[i]=top_element();
                //     pop();
                // }
                // for(int i=0;i<=top;i++)
                // {
                //     for(int j=i+1;j<=top;j++)
                //     if(arr[i]<arr[j])
                //     {
                //         int temp=arr[i];
                //         arr[i]=arr[j];
                //         arr[j]=temp;
                //     }
                //     return arr[0];


                    // second method


                     stack<int> s1;
                     stack<int> getmin;
                     while(s.isempty())
                     {
                         int x=s.pop();
                         s1.push_back(x);
                         s1.push_back(s.top());
                         if(s1.top()<getmin.top())
                         {
                            getmin.push(s1.top());

                         }
                         else
                         {
                            getmin.push(getmin.top());
                         }
                         s.pop();
                     }
                }
            }
            void display()
            {
               for(int i=0;i<=top;i++)
               {
                   cout<<s[i]<<" ";
               }
               cout<<endl;
            }

};
int main()
{
     stack1 obj;
     obj.push(1);
     obj.push(2);
     obj.push(3);
     obj.display();
     cout<<" POP ELement : "<<obj.pop()<<endl;
     obj.display();
     cout<<"top : "<<obj.top_element()<<endl;
     obj.isempty();
     obj.isfull();
     
}