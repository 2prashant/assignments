//2. Create a Queue using a linked list.
#include<iostream>
using namespace std;
class node
{
    public:
              int data;
              node* next;
    public:
              node(int v)
             {
                data=v;
                 next=NULL;
             }
};
class Queue
{
      private:
              node* head=NULL;
      public:
              void push(int v)  
              {
                  node* temp=head;
                  node* x=new node(v);
                   if(head==NULL) 
                   {
                       head=x;
                   }
                   else
                   {
                       while(temp->next!=NULL)
                       {
                           temp=temp->next;
                       }
                       temp->next=x;
                   }
              }
              void pop()
              {
                   node* temp=head;
                   if(head==NULL)
                   {
                      cout<<"Queue ia already empty"<<endl;
                   }
                   else
                   {
                        temp=temp->next;
                        head=temp;
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
} ;
int main()
{
    Queue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.display();
    obj.pop();
    obj.pop();
    obj.display();
    

    return 0;
}

