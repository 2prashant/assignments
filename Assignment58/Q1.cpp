//DSA Circular linked list
// 1. Given a circular doubly linked list and a position n. The task is to delete the node at
// the given position n from the beginning. Initial circular doubly linked list.

#include<iostream>
using namespace std;
class node
{
     public:
             int data;
             node* next;
             node* prev;
     public:
             node(int n)
             {
                  data=n;
                  next=NULL;
                  prev=NULL;
             }

};
class circularDLinkedList
{
      private:
               node* head=NULL;
      public:
               void insertAtbegin(int v)
               {
                    node* temp=head;
                    node* x=new node(v);
                    if(head==NULL)
                    {
                         head=x;
                         x->prev=x;
                         x->next=x;
                    }
                    else
                    {
                         x->next=head;
                         x->prev=head->prev;
                         head=x;
                         x->next->prev=x;
                         x->prev->next=x;

                    }
               }
               void insertAtend(int v)
               {
                     node* temp=head;
                     node* x=new node(v);
                     if(head==NULL)
                     {
                           head=x;
                           x->prev=x;
                           x->next=x;
                     }
                     else
                     {
                           while(temp->next!=head)
                           {
                                temp=temp->next;
                           }
                           x->prev=temp;
                           x->next=head;
                           head->prev=x;
                           temp->next=x;
                     }
               }
               void deleteAtbegin()
               {
                    node* temp=head;
                    if(head==NULL)
                    {
                         cout<<"circular double Linked List is Already empty"<<endl;
                         return;
                    } 
                    else
                    {
                          head=temp->next;
                          head->prev=temp->prev;
                          temp->prev->next=head;
                          delete temp;
                    }
               }
               void display()
               {
                   node* temp=head;
                   while(temp->next!=head)
                   {
                       cout<<temp->data<<"<=>";
                       temp=temp->next;
                   }
                   cout<<temp->data<<"<=>";
                   cout<<endl;
               }
             
            
};

int main()
{
      circularDLinkedList  obj;
      obj.insertAtbegin(1);
      obj.insertAtbegin(2);
      obj.insertAtbegin(3);
      obj.insertAtend(4);
      obj.insertAtend(5);
      obj.insertAtend(6);
      obj.insertAtend(7);
      obj.display();
      return 0;
}