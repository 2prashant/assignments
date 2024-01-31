// 4. Given a sorted doubly linked list containing n nodes. The problem is removing
// duplicate nodes from the given list.

#include<iostream>
using namespace std;
class node
{
    public:
           int data;
           node* next;
           node* prev;
    public:
            node(int v)
            {
                 data=v;
                 next=NULL;
                 prev=NULL;
            }
};
class LinkedList
{
         private:
                  node* head=NULL;
         public:
                void insertinsort(int v)
                {
                     node* temp=head;
                     node* x=new node(v);
                     if(head==NULL)
                     {
                         head=x;
                     }
                     else if(temp->data>v)
                     {
                         x->next=temp;
                         temp->prev=x;
                         head=x;
                     }
                     else
                     {
                           while(temp->next!=NULL)
                           {
                               if(temp->data>v)
                               {
                                     x->prev=temp->prev;
                                     x->next=temp->prev->next;
                                     temp->prev->next=x;
                                     temp->prev=x;
                                     return;
                               }
                               else
                               {
                                   temp=temp->next;
                               }

                           }
                           if(temp->data>v)
                           {
                                    x->prev=temp->prev;
                                     x->next=temp->prev->next;
                                     temp->prev->next=x;
                                     temp->prev=x;
                           }
                           else
                           {
                                 x->prev=temp;
                                 temp->next=x;
                           }
                     }
                }
                void removeDublicate()
                {
                        node* temp=head;
                        while(temp->data==temp->next->data)
                        {
                              
                              if(temp->data==temp->next->data)
                              {
                                    head=temp->next;
                                    head->prev=NULL;
                                   // free(temp);
                              }
                              temp=temp->next;
                               

                        }
                        while(temp->next!=NULL)
                        {
                                if(temp->data==temp->next->data)
                                {
                                     temp->next->prev=temp->prev;
                                     temp->prev->next=temp->next;
                                  //   free(temp);
                                }
                               
                                     temp=temp->next;
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
     LinkedList obj;
     obj.insertinsort(1);
     obj.insertinsort(2);
     obj.insertinsort(5);
     obj.insertinsort(3);
     obj.insertinsort(8);
     obj.insertinsort(15);
     obj.insertinsort(20);
     obj.insertinsort(8);
     obj.insertinsort(25);
     obj.insertinsort(17);
     obj.insertinsort(17);
     obj.insertinsort(17);
     obj.insertinsort(1);
     obj.insertinsort(1);
     obj.insertinsort(25);
     obj.insertinsort(25);
     obj.display();
     obj.removeDublicate();
     obj.display();
     return 0;
}
