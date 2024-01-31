// 5. Given an unsorted doubly linked list containing n nodes. The problem is to remove
// duplicate nodes from the given list.

#include<iostream>
using namespace std;
class node
{
     public:
             int data;
             node* prev;
             node* next;
    public:
            node(int v)
            {
                data=v;
                prev=NULL;
                next=NULL;
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
                  }
                  else
                  {
                       while(temp->next!=NULL)
                       {
                             temp=temp->next;
                       }
                       x->prev=temp;
                       temp->next=x;
                  }
             }
             void deleteNode(node* temp, node* ptr2)
             {
                if(temp==NULL || ptr2==NULL)   
                {
                      return;
                }
               
                if(temp==ptr2)
                {
                     temp=ptr2->next;
                }
                if(temp->next!=NULL)
                {
                       temp->prev->next=temp->next;
                }
                if(temp->prev!=NULL)
                {
                      temp->next->prev=temp->prev;
                }
              //  free(temp);
             }
             void removeDublicate()
             {
                   // node* temp=head;
                    if(head==NULL || head->next==NULL) 
                    {
                        cout<<"Linked list is already empty"<<endl;
                        return;
                    }
                    node* ptr1;
                    node* ptr2;
                    for(ptr1=head;ptr1!=NULL;ptr1=ptr1->next)
                    {
                          ptr2=ptr1->next;
                          while(ptr2!=NULL)
                          {
                               if(ptr1->data==ptr2->data)
                               {
                                     node* next=ptr2->next;
                                     deleteNode(head,ptr2);
                                     ptr2=next;
                               }
                               else
                               {
                                   ptr2=ptr2->next;
                               }
                          }
                    }
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
    obj.insert(45);
    obj.insert(67);
    obj.insert(3);
    obj.insert(8);
    obj.display();
    obj.removeDublicate();
    obj.display();
    return 0;

}