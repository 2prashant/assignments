//8. Create a Stack using a singly linked list.
#include<bits/stdc++.h>
using namespace std;
class node
{
    public: 
            int data;
            node* next;
    public:
           node(int n)
           {
               data=n;
               next=NULL;
           }
};
class Stack
{
     private:
             node* head=NULL;
             int top();
     public:
             void push(int v)
             {
               
                node* x=new node(v);
                if(head==NULL)
                {
                    head=x; 
                }
                else
                {
                     x->next=head;
                     head=x;
                }
             }
             void pop()
             {
                  node* temp=head;
                 if(head==NULL)
                 {
                    cout<<"Linked List is already empty"<<endl;
                 }
                 else
                 {
                      head=head->next;
                      delete temp;
                 }
             }
             void display()
             {
                 node* temp=head;
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
    Stack obj;
    obj.push(5);
    obj.push(10);
    obj.push(15);
    obj.display();
    obj.pop();
    obj.display();
     return 0;
}