/*
4. Write a function that moves the last node to the front in a given Singly Linked List.
Examples:
Input: 1->2->3->4->5
Output: 5->1->2->3->4
Input: 3->8->1->5->7->12
Output: 12->3->8->1->5->7
*/
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
class singlelinkedList
{
    private:
               node* head=NULL;
    public:
            void insertAtanypos(int v, int p)
            {
                  node* temp=head;
                  node* x=new node(v);
                  if(p==1)
                  {
                      if(head==NULL)
                      {
                           head=x;
                           return;
                      }
                      else
                      {
                          x->next=head;
                          head=x;
                          return;
                      }
                  }
                  else
                  {
                       while(p>2)
                       {
                           if(temp==NULL || p<2)
                           {
                              return;
                           }
                           else
                           {
                              temp=temp->next;
                              p--;
                           }
                       }
                       if(temp->next==NULL)
                       {
                          temp->next=x;
                       }
                       else
                       {
                           x->next=temp->next;
                           temp->next=x;
                       }
                  }
            }
            void lnodetoF()
            {
                node* prev=NULL;
                node* temp=head;
                if(head==NULL)
                {
                    return;
                }
                else
                {
                     while(temp->next!=NULL)
                     {
                          prev=temp;
                         temp=temp->next;
                     }
                     node* x=new node(temp->data);
                     prev->next=NULL;
                     delete temp;
                      x->next=head;
                      head=x; 
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
            }
};
int main()
{
   singlelinkedList obj;
   obj.insertAtanypos(11,1);
   obj.insertAtanypos(12,2);
   obj.insertAtanypos(13,3);
   obj.insertAtanypos(14,4);
   obj.insertAtanypos(15,5);
   obj.insertAtanypos(101,1);
   obj.insertAtanypos(33,3);
   obj.insertAtanypos(77,7);
   obj.insertAtanypos(99,9);
   obj.display();
   cout<<endl;
   obj.lnodetoF();
   obj.display();
}