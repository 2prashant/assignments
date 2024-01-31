#include<iostream>
using namespace std;

/*
class node
{
    public:
           int data;
           node* next;
            node(int v)
           {
                 data=v;
                  next=NULL;
            }
};
class stack
{
    private:
             node *head;
    public:
        stack()
        {
            head=NULL;
        }
        ~stack(){

              head==NULL;
        }
        void push(int v)
        {
             node *temp=new node(v);
             if(head==NULL)
             {
                  head=temp;
             }
             else
             {
                  node* x=head;
                  while(x->next!=NULL)
                  {
                      x=x->next;
                  }
                  x->next=temp;
             }

        }
        int  pop()
        {
             if(head==NULL)
             {
                cout<<"stack is empty";
                return -1;
             }
             else
             {
                 node* prev;
                  node* temp=head;
                 
                  while(temp->next!=NULL)
                  {
                    prev=temp;
                    temp=temp->next;
                  }
                  if(head->next!=NULL)
                      prev->next=NULL;
                  else
                       head=NULL;
                  return temp->data;
                  
             }
            
        }
        void display()
        {
            node* temp=head;
            if(head==NULL)
            {
                cout<<"Stack is empty"<<endl;
            }
            while(temp!=NULL)
            {
                cout<<temp->data<<"=>";
                temp=temp->next;
            }
            cout<<endl;
        }
};
int main()
{
       stack obj;
       obj.push(10);
       obj.push(20);
       obj.push(30);
       obj.display();
       cout<<obj.pop()<<endl;;
        obj.display();
        cout<<obj.pop()<<endl;;
        obj.display();
       cout<<obj.pop()<<endl;;
       obj.display();
         cout<<obj.pop()<<endl;
        // obj.display();
    //      obj.pop();
    //     cout<<"\n";
    //      obj.display();
    //      obj.pop();



}
*/

// best 
class node
{
     public:
             int data;
             node* next;
             node(int v)
             {
                data=v;
                next=NULL;
             }
};
class stack
{
     node *top=NULL;
    public:
            void push(int v)
            {
                node* newnode=new node(v);
                newnode->data=v;
                newnode->next=top;
                top=newnode;
            }
            int  pop()
            {
                 if(top==NULL)
                 {
                      cout<<"stack is empty"<<endl;
                      return -1;
                 }
                 else
                 {
                    int temp= top->data;
                    top=top->next;
                    return temp;
                 }
            }
            void display()
            {
                node* ptr=top;
                if(top==NULL)
                {
                     cout<<"stack is empty"<<endl;
                }
                while(ptr!=NULL)
                {
                    cout<<ptr->data<<"=>";
                    ptr=ptr->next;  
                }
                cout<<endl;

            }
};
int main()
{
    stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.display();
    cout<<obj.pop()<<endl;
    obj.display();
    cout<<obj.pop()<<endl;
    obj.display();
    cout<<obj.pop()<<endl;
    obj.display();
    cout<<obj.pop()<<endl;
    obj.display();
    return 0;
}