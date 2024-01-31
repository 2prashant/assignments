                         //      Stack

/*1. Given a stack with push(), pop(), empty() operations, delete the middle of the stack
without using any additional data structure.
Middle: ceil((size_of_stack+1)/2) (1-based index)
Example 1:
Input:
Stack = {1, 2, 3, 4, 5}
Output: 
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5, hence the middle element will be the 3rd element
which is deleted

*/
// solve on gfg
#include<iostream>
using namespace std;
class stack
{
      private:
             int arr[100];
             int top;
             int arr2[100];
      public:
            stack()
            {
                top=-1;
            }
            ~stack()
            {
                top=-1;
            }
            void push(int v)
            {
                if(top==99)
                {
                    cout<<"Stack is overflow"<<endl;    
                }
                else
                {
                    top++;
                    arr[top]=v;
                }
            }
            int pop()
            {
                if(top==-1)
                {
                    cout<<"Stack is underflow"<<endl;
                }
                else
                {
                    top--;
                    return arr[top+1];
                    // return arr[top--];
                }
            }
            bool Empty()
            {
                if(top==-1)
                {
                       cout<<"Stack is empty"<<endl;
                       return NULL;
                }
                else
                {
                       cout<<"Stack is not empty"<<endl;
                }
            }
             void deleteAtmiddle()
             {
                if((top+1)%2==0)
                {
                  int mid=(top+1)/2;
                  while(mid>=0) 
                  {
                      mid--;
                      int x;
                      x=pop();
                      if(mid==0)
                      {
                        delete mid;
                      }
                      else
                      arr2.push(x);
                  }
                  
                }
                else
                {
                  int mid=((top))/2;
                  while(mid>=0) 
                  {
                      if(mid==0)
                      {
                           arr.pop();
                      }
                      else
                      {
                             
                             arr2.push(arr.top());  
                      }
                     
                      mid--;
                  }
                }
             }
            void display()
            {
              for(int i=0;i<=top;i++)
              {
                  cout<<arr[i]<<" ";
              }
              cout<<endl;
            }
};
int main()
{
    stack obj;
    while(1)
    {
        cout<<"========================================================"<<endl;
        cout<<"1.Push element in stack"<<endl;
        cout<<"2.pop element in stack"<<endl;
        cout<<"3.check stack empty "<<endl;
        cout<<"4.delete mid index"<<endl;
        cout<<"5.display"<<endl;
        cout<<"6.exit"<<endl;
        cout<<"Enter your choice=";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
                    {
                        int value;
                        cout<<"Enter element=";
                        cin>>value;
                        obj.push(value);
                        break;
                    }
            case 2:
                    {
                        
                        cout<<"pop element="<<obj.pop()<<endl;
                        break;
                    }
            case 3:
                    {
                        
                        obj.Empty();
                        break;
                    } 
            case 4:
                    {  
                        obj.deleteAtmiddle();
                        arr2.
                        break;
                    } 
            case 5:
                    {     
                        obj.display();
                        break;
                    }   
             case 6:
                     {
                           exit(0);
                     }  
            default:
                      {
                           cout<<"Invalid choice"<<endl;
                           break;
                      }  
        }
    }
}