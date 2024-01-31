// 7. Given a doubly-linked list, rotate the linked list counter-clockwise by N nodes. Here N
// is a given positive integer and is smaller than the count of nodes in the linked list.

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
class LinkedList
{
     private:
              node* head=NULL;
    public:
            void insert(int v)
            {
                 node* temp=head;
                 node* x=new node(v);
                 if(head==NULL)
                 {
                    head=x;
                    return;
                 }
                 while(temp->next!=NULL)
                 {
                    temp=temp->next;
                 }
                 x->prev=temp;
                 temp->next=x;  
            }
            void rotrate(int k)
            {
                 if(k==0)
                 {
                    return;
                 }
                 node* temp=head; 
                 while(k)
                 {
                    if(temp->next==NULL)
                    {
                         return;
                    }
                    else
                    {
                         temp=temp->next;
                         k--;
                    }
                 }
                    node* Newhead=temp;
                    temp->prev->next=NULL;
                    temp->prev=NULL;
                    while(temp->next!=NULL)
                    {
                         temp=temp->next;
                    }
                    head->prev=temp;
                    temp->next=head;
                    head=Newhead;
                 
            }
            void rotratMethodfirst(int k)
            {
                  node* temp=head;
                  while(temp->next!=NULL)
                  {
                      temp=temp->next;
                  }
                  temp->next=head;
                  head->prev=temp;
                  int count=1;
                  while(count<=k)
                  {
                       head=head->next;
                       temp=temp->next;
                       count++;
                  }
                  temp->next=NULL;
                  head->prev=NULL;
            }
            void display()
            {
               node* temp=head;
               while(temp!=NULL)
               {
                    cout<<temp->data<<"<=>";
                    temp=temp->next;
               }
               cout<<endl;
            }

};
int main()
{
       LinkedList obj;
       obj.insert(1);
       obj.insert(2);
       obj.insert(3);
       obj.insert(4);
       obj.insert(5);
       obj.insert(6);
       obj.display();
      obj.rotrate(2);
      //  obj.rotratMethodfirst(2);
       obj.display();
       return 0;
}